class GameModeSmashAndGrab extends GameModeMPBase;

var SmashAndGrabItemBase gameItem;
var bool bGoalAchieved;
var private Timer respawnTimer;

private function DecrementRespawnTimers()
{
    uDecrementRespawnTimer( 0 , 1);
    uDecrementRespawnTimer( 1 , 1);
}

function Initialize()
{
	local SmashAndGrabItemBase tib;

	mplog( "Initialize() in GameModeSmashAndGrab." );
    Super.Initialize();

	if (respawnTimer != None)
		respawnTimer.Destroy();

	respawnTimer = Spawn(class'Timer');
    assert(respawnTimer != None);
    respawnTimer.timerDelegate = DecrementRespawnTimers;

    // Spawn the case here.
	Level.SpawningManager.DoMPSpawning( SwatGameInfo(Level.Game), "SmashAndGrabCaseRoster;SmashAndGrabGoalRoster" );

	gameItem = None;
	foreach AllActors( class'SmashAndGrabItemBase', tib )
    {
		if (!tib.bDeleteMe)
		{
			log("Found"@tib);
			AssertWithDescription(gameItem == None, "Only 1 SmashAndGrabItemBase is allowed per level.");
			gameItem = tib;
		}
    }

    respawnTimer.StartTimer( 1.0, true );
	bGoalAchieved = false;
	gameItem.Reset();
	SwatGameReplicationInfo(SGI.GameReplicationInfo).SetPlayerWithItem(None);
}

function Destroyed()
{
	Super.Destroyed();

	log("Destroying case"@gameItem);
	if (gameItem != None)
	{
		gameItem.Destroy();
	}
}

function ItemPickup( NetPlayer np )
{
	SGI.Broadcast( None, np.GetHumanReadableName(), 'SmashAndGrabGotItem' );
	SwatGameReplicationInfo(SGI.GameReplicationInfo).SetPlayerWithItem(np.PlayerReplicationInfo);
}

function ItemDropped( NetPlayer np )
{
	SwatGameReplicationInfo(SGI.GameReplicationInfo).SetPlayerWithItem(None);
	np.UnsetHasTheItem();
	SGI.Broadcast( None, np.GetHumanReadableName(), 'SmashAndGrabDroppedItem' );
}

function OnPlayerDied( PlayerController player, Controller killer )
{
	local SwatGamePlayerController swatVictim;
	local NetPlayer np;
	
//uMOD begin
	local Controller controller;
	local SwatGamePlayerController uPlayer;
	local int team;
	local int uDeadPlayers;
	local SwatGamePlayerController uKilledPlayer;
	
	uKilledPlayer = SwatGamePlayerController( player );
	team = uKilledPlayer.SwatRepoPlayerItem.TeamID;
	uDeadPlayers = 0;
	
	for (controller = level.controllerList; controller != none; controller = controller.nextController)
    {
        uPlayer = SwatGamePlayerController(controller);
        if (uPlayer != none && uPlayer.SwatRepoPlayerItem.TeamID == team && uPlayer.IsDead())
        {
            uDeadPlayers++;
        }
    }
	if(uDeadPlayers == 0)
		uOnRespawnTimerAtZero(team, 1);
//uMOD end

	

	swatVictim = SwatGamePlayerController(player);

	if (swatVictim != None)
		np = NetPlayer(swatVictim.SwatPlayer);

	if (np != None && np.HasTheItem())
	{
		gameItem.Dropped(np.Location);
		ItemDropped(np);
		
		if (killer != None && killer != player)
		{
			SwatPlayerReplicationInfo(killer.PlayerReplicationInfo).netScoreInfo.IncrementSmashAndGrabKilled();
		}
	}

	super.OnPlayerDied(player, killer);
}

function ItemGoalAchieved(NetPlayer np)
{
    local SwatGamePlayerController C;
    local Controller controller;
    local SwatGamePlayerController PlayerController;
    local SwatPlayerReplicationInfo SPRI;
    local NetTeam TheirTeam;

	if (bGoalAchieved)
		return;

    // Award Crybaby points to each player on the suspect team.
    for (Controller = Level.ControllerList; Controller != none; Controller = Controller.NextController)
    {
        PlayerController = SwatGamePlayerController(Controller);

        if ( PlayerController != None
             && PlayerController.SwatRepoPlayerItem.TeamID == 1 ) // Suspects = 1
        {
            SPRI = SwatPlayerReplicationInfo(PlayerController.PlayerReplicationInfo);
            TheirTeam = NetTeam(SPRI.Team);

            SPRI.NetScoreInfo.IncrementSGCrybaby();
            TheirTeam.NetScoreInfo.IncrementSGCrybaby();
        }
    }

	bGoalAchieved = true;

    InterestingViewTarget = np;
    
    C = SwatGamePlayerController(np.Controller);
	if (C != None)
	{
		C.Stats.EscapedWithCase();
		SwatPlayerReplicationInfo(C.PlayerReplicationInfo).netScoreInfo.IncrementSmashAndGrabEscaped();
	}

	NetRoundFinished( SRO_SuspectsVictoriousSmashAndGrab );
}

function NetRoundTimerExpired()
{
    local Controller controller;
    local SwatGamePlayerController PlayerController;
    local SwatPlayerReplicationInfo SPRI;
    local NetTeam TheirTeam;

    // Award Crybaby points to each player on the SWAT team.
    for (Controller = Level.ControllerList; Controller != none; Controller = Controller.NextController)
    {
        PlayerController = SwatGamePlayerController(Controller);

        if ( PlayerController != None
             && PlayerController.SwatRepoPlayerItem.TeamID == 0 ) // SWAT = 0
        {
            SPRI = SwatPlayerReplicationInfo(PlayerController.PlayerReplicationInfo);
            TheirTeam = NetTeam(SPRI.Team);

            SPRI.NetScoreInfo.IncrementSGCrybaby();
            TheirTeam.NetScoreInfo.IncrementSGCrybaby();
        }
    }

	NetRoundFinished( SRO_SwatVictoriousSmashAndGrab );
}

function bool ValidSpawnClusterForMode( SwatMPStartCluster theCluster )
{
    return theCluster.UseInSmashAndGrab;
}

function bool ClusterPointValidForRoundStart( SwatMPStartCluster thePoint )
{
    return thePoint.UseInSmashAndGrab && thePoint.NeverFirstSpawnInSAGRound == false;
}

function OnPawnArrested( Pawn Arrestee, Pawn Arrester )
{
	local NetPlayer np;
	local float ArrestRoundTimeDeduction;

	ArrestRoundTimeDeduction = ServerSettings(Level.CurrentServerSettings).ArrestRoundTimeDeduction;

	// round time is deducted when swat make an arrest
	if (ArrestRoundTimeDeduction > 0 && NetPlayer(Arrester).GetTeamNumber() == 0 && NetPlayer(Arrestee).GetTeamNumber() == 1)
	{
		SwatGameReplicationInfo(SGI.GameReplicationInfo).ServerCountdownTime -= ArrestRoundTimeDeduction;
		SGI.Broadcast(None, string(ArrestRoundTimeDeduction), 'SmashAndGrabArrestTimeDeduction');
	}

	np = NetPlayer(Arrestee);
	if (np != None && np.HasTheItem())
	{
		gameItem.Dropped(np.Location);
		ItemDropped(np);
	}

	Super.OnPawnArrested(Arrestee, Arrester);
}

function NetRoundTimeRemaining( int TimeRemaining )
{
    Super.NetRoundTimeRemaining( TimeRemaining );

    //if we are not actually playing, don't do anything else
    if( SwatRepo(Level.GetRepo()).GuiConfig.SwatGameState != GAMESTATE_MidGame )
        return;
        
    // broadcast round time
    SwatGameReplicationInfo(SGI.GameReplicationInfo).SpecialTime = TimeRemaining;
}

defaultproperties
{
}