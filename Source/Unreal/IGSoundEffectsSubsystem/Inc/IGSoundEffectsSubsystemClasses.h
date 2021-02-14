/*===========================================================================
	  C++ class	definitions	exported from UnrealScript.
	  This is automatically	generated by the tools.
	  DO NOT modify	this manually! Edit	the	corresponding .uc files	instead!
===========================================================================*/
#if SUPPORTS_PRAGMA_PACK
#pragma pack (push,4)
#endif

#ifndef IGSOUNDEFFECTSSUBSYSTEM_API
#define IGSOUNDEFFECTSSUBSYSTEM_API DLL_IMPORT
#endif

#ifndef NAMES_ONLY
#define AUTOGENERATE_NAME(name) extern IGSOUNDEFFECTSSUBSYSTEM_API	FName IGSOUNDEFFECTSSUBSYSTEM_##name;
#define AUTOGENERATE_FUNCTION(cls,idx,name)
#endif

AUTOGENERATE_NAME(Deposit)
AUTOGENERATE_NAME(InitHook)
AUTOGENERATE_NAME(OnDeposited)
AUTOGENERATE_NAME(OnWithdrawn)
AUTOGENERATE_NAME(PlayMySound)
AUTOGENERATE_NAME(PlaySpecificSoundFromSchema)
AUTOGENERATE_NAME(PopulateSoundsHook)
AUTOGENERATE_NAME(SetNativeFlagsHook)
AUTOGENERATE_NAME(Withdraw)
AUTOGENERATE_NAME(toString)

#ifndef NAMES_ONLY


// "event"	function whose parameters correspond to	"struct AActorBank_eventDeposit_Parms"	is declared	in "..\IGSoundEffectsSubsystem\Classes\ActorBank.uc"
struct AActorBank_eventDeposit_Parms
{
	  class AActor* inActor;
};
// "event"	function whose parameters correspond to	"struct AActorBank_eventWithdraw_Parms"	is declared	in "..\IGSoundEffectsSubsystem\Classes\ActorBank.uc"
struct AActorBank_eventWithdraw_Parms
{
	  class AActor* ReturnValue;
};
// "event"	function whose parameters correspond to	"struct AActorBank_eventOnDeposited_Parms"	is declared	in "..\IGSoundEffectsSubsystem\Classes\ActorBank.uc"
struct AActorBank_eventOnDeposited_Parms
{
	  class AActor* inActorDeposited;
};
// "event"	function whose parameters correspond to	"struct AActorBank_eventOnWithdrawn_Parms"	is declared	in "..\IGSoundEffectsSubsystem\Classes\ActorBank.uc"
struct AActorBank_eventOnWithdrawn_Parms
{
	  class AActor* inActorWithdrawn;
};
// Constant kNoTime is declared in "..\IGSoundEffectsSubsystem\Classes\SoundEffectsSubsystem.uc"
#define UCONST_kNoTime 1000000000.0
// Constant kMaxInstances is declared in "..\IGSoundEffectsSubsystem\Classes\SoundEffectsSubsystem.uc"
#define UCONST_kMaxInstances 80
// Constant kMaxSounds is declared in "..\IGSoundEffectsSubsystem\Classes\SoundEffectsSubsystem.uc"
#define UCONST_kMaxSounds 80

// "event"	function whose parameters correspond to	"struct ASoundEffectsSubsystem_eventPlaySpecificSoundFromSchema_Parms"	is declared	in "..\IGSoundEffectsSubsystem\Classes\SoundEffectsSubsystem.uc"
struct ASoundEffectsSubsystem_eventPlaySpecificSoundFromSchema_Parms
{
	  class UEffectSpecification* GenericSchema;
	  class AActor* Source;
	  INT SpecificSoundRef;
	  class AActor* Target;
	  class UMaterial* TargetMaterial;
	  FVector overrideWorldLocation;
	  FRotator overrideWorldRotation;
	  class IIEffectObserver* Observer;
	  class AActor* ReturnValue;
};

// "event"	function whose parameters correspond to	"struct ASoundInstance_eventtoString_Parms"	is declared	in "..\IGSoundEffectsSubsystem\Classes\SoundInstance.uc"
struct ASoundInstance_eventtoString_Parms
{
	  FString ReturnValue;
};


// Enum EVolumeCategory is declared in "..\IGSoundEffectsSubsystem\Classes\SoundEffectSpecification.uc"
enum EVolumeCategory
{
	 VOL_Normal              =0,
	 VOL_Ambient             =1,
	 VOL_Voice               =2,
	 VOL_Music               =3,
	 VOL_MAX                 =4,
};
// Struct FPolyLoopStruct	is declared	in "..\IGSoundEffectsSubsystem\Classes\SoundEffectSpecification.uc"
struct IGSOUNDEFFECTSSUBSYSTEM_API FPolyLoopStruct
{
    FRange PolyLoopRange;
    INT LoopSoundLimit;
};

// Constant SF_VOIP is declared in "..\IGSoundEffectsSubsystem\Classes\SoundEffectSpecification.uc"
#define UCONST_SF_VOIP 16384
// Constant SF_Music is declared in "..\IGSoundEffectsSubsystem\Classes\SoundEffectSpecification.uc"
#define UCONST_SF_Music 4096
// Constant SF_Voice is declared in "..\IGSoundEffectsSubsystem\Classes\SoundEffectSpecification.uc"
#define UCONST_SF_Voice 2048
// Constant SF_Ambient is declared in "..\IGSoundEffectsSubsystem\Classes\SoundEffectSpecification.uc"
#define UCONST_SF_Ambient 1024
// Constant SF_VolumePriority is declared in "..\IGSoundEffectsSubsystem\Classes\SoundEffectSpecification.uc"
#define UCONST_SF_VolumePriority 512
// Constant SF_NoOverride is declared in "..\IGSoundEffectsSubsystem\Classes\SoundEffectSpecification.uc"
#define UCONST_SF_NoOverride 256
// Constant SF_RootMotion is declared in "..\IGSoundEffectsSubsystem\Classes\SoundEffectSpecification.uc"
#define UCONST_SF_RootMotion 128
// Constant SF_NoUpdates is declared in "..\IGSoundEffectsSubsystem\Classes\SoundEffectSpecification.uc"
#define UCONST_SF_NoUpdates 64
// Constant SF_UpdatePitch is declared in "..\IGSoundEffectsSubsystem\Classes\SoundEffectSpecification.uc"
#define UCONST_SF_UpdatePitch 32
// Constant SF_No3D is declared in "..\IGSoundEffectsSubsystem\Classes\SoundEffectSpecification.uc"
#define UCONST_SF_No3D 16
// Constant SF_LoopingStream is declared in "..\IGSoundEffectsSubsystem\Classes\SoundEffectSpecification.uc"
#define UCONST_SF_LoopingStream 8
// Constant SF_Streaming is declared in "..\IGSoundEffectsSubsystem\Classes\SoundEffectSpecification.uc"
#define UCONST_SF_Streaming 4
// Constant SF_Looping is declared in "..\IGSoundEffectsSubsystem\Classes\SoundEffectSpecification.uc"
#define UCONST_SF_Looping 2
// Constant kNoTime is declared in "..\IGSoundEffectsSubsystem\Classes\SoundEffectSpecification.uc"
#define UCONST_kNoTime 1000000000.0

// "event"	function whose parameters correspond to	"struct USoundEffectSpecification_eventPopulateSoundsHook_Parms"	is declared	in "..\IGSoundEffectsSubsystem\Classes\SoundEffectSpecification.uc"
struct USoundEffectSpecification_eventPopulateSoundsHook_Parms
{
};
// "event"	function whose parameters correspond to	"struct USoundEffectSpecification_eventInitHook_Parms"	is declared	in "..\IGSoundEffectsSubsystem\Classes\SoundEffectSpecification.uc"
struct USoundEffectSpecification_eventInitHook_Parms
{
};
// "event"	function whose parameters correspond to	"struct USoundEffectSpecification_eventSetNativeFlagsHook_Parms"	is declared	in "..\IGSoundEffectsSubsystem\Classes\SoundEffectSpecification.uc"
struct USoundEffectSpecification_eventSetNativeFlagsHook_Parms
{
};
// Struct FFlaggedSound	is declared	in "..\IGSoundEffectsSubsystem\Classes\NormalSoundEffectSpecification.uc"
struct IGSOUNDEFFECTSSUBSYSTEM_API FFlaggedSound
{
    class USound* SoundToPlay;
    INT Flag;
};


// Enum ESoundStreamType is declared in "..\IGSoundEffectsSubsystem\Classes\StreamSoundEffectSpecification.uc"
enum ESoundStreamType
{
	 ADPCM                   =0,
	 PCM                     =1,
};


// "event"	function whose parameters correspond to	"struct USoundRef_eventtoString_Parms"	is declared	in "..\IGSoundEffectsSubsystem\Classes\SoundRef.uc"
struct USoundRef_eventtoString_Parms
{
	  FString ReturnValue;
};

// "event"	function whose parameters correspond to	"struct UNormalSoundRef_eventPlayMySound_Parms"	is declared	in "..\IGSoundEffectsSubsystem\Classes\NormalSoundRef.uc"
struct UNormalSoundRef_eventPlayMySound_Parms
{
	  class ASoundInstance* inInstance;
	  INT ReturnValue;
};

// Enum ESoundStatus is declared in "..\IGSoundEffectsSubsystem\Classes\SoundSet.uc"
enum ESoundStatus
{
	 SS_Available            =0,
	 SS_Used                 =1,
	 SS_MAX                  =2,
};

// Struct FSpeakerInfo	is declared	in "..\IGSoundEffectsSubsystem\Classes\Speakers.uc"
struct IGSOUNDEFFECTSSUBSYSTEM_API FSpeakerInfo
{
    FName SpeakerID;
    FStringNoInit SpeakerString;
    FStringNoInit PreFormatting;
    FStringNoInit PostFormatting;
    BITFIELD bUsePlayerNameInMP:1;
};


// Class	AActorBank is declared in "..\IGSoundEffectsSubsystem\Classes\ActorBank.uc"
class IGSOUNDEFFECTSSUBSYSTEM_API	AActorBank	: public AActor
{
public:
    TArrayNoInit<class AActor*> BankedActors;
    class UClass* ActorClassType;
    BITFIELD bInitialized:1;
    FScriptDelegate __OnWithdrawn__Delegate;
    FScriptDelegate __OnDeposited__Delegate;
	  void	eventDeposit(class AActor* inActor)
	  {
        AActorBank_eventDeposit_Parms Parms;
		   Parms.inActor=inActor;
        ProcessEvent(FindFunctionChecked(IGSOUNDEFFECTSSUBSYSTEM_Deposit),&Parms);
	  }
	  class AActor*	eventWithdraw()
	  {
        AActorBank_eventWithdraw_Parms Parms;
		   Parms.ReturnValue=0;
        ProcessEvent(FindFunctionChecked(IGSOUNDEFFECTSSUBSYSTEM_Withdraw),&Parms);
		   return Parms.ReturnValue;
	  }
	  void	delegateOnDeposited(class AActor* inActorDeposited)
	  {
        AActorBank_eventOnDeposited_Parms Parms;
		   Parms.inActorDeposited=inActorDeposited;
		   ProcessDelegate(IGSOUNDEFFECTSSUBSYSTEM_OnDeposited,&__OnDeposited__Delegate,&Parms);
	  }
	  void	delegateOnWithdrawn(class AActor* inActorWithdrawn)
	  {
        AActorBank_eventOnWithdrawn_Parms Parms;
		   Parms.inActorWithdrawn=inActorWithdrawn;
		   ProcessDelegate(IGSOUNDEFFECTSSUBSYSTEM_OnWithdrawn,&__OnWithdrawn__Delegate,&Parms);
	  }
	   DECLARE_CLASS(AActorBank,AActor,0|CLASS_Config,IGSoundEffectsSubsystem)
	   NO_DEFAULT_CONSTRUCTOR(AActorBank)
};

// Class	ASoundEffectsSubsystem is declared in "..\IGSoundEffectsSubsystem\Classes\SoundEffectsSubsystem.uc"
class IGSOUNDEFFECTSSUBSYSTEM_API	ASoundEffectsSubsystem	: public AEffectsSubsystem
{
public:
    class AActorBank* SoundInstanceBank;
    TArrayNoInit<class ASoundInstance*> CurrentSounds;
    BITFIELD bSoundsArePaused:1;
    BITFIELD GameStarted:1;
    BITFIELD bDebugSounds:1;
    FName MusicContext;
    FStringNoInit MusicManagerClassName;
    class ADynamicMusicManagerBase* MusicManager;
    class AMusicMarker* LastMusicMarker;
    class USpeakers* Speakers;
    FStringNoInit OverrideCaptionSpeakerNameForNextEffectEvent;
	   DECLARE_FUNCTION(execPostLoaded);
	   DECLARE_FUNCTION(execHasAudioHardware);
	   DECLARE_FUNCTION(execNativeInitialize);
	   DECLARE_FUNCTION(execCreateSoundInstance);
	   DECLARE_FUNCTION(execAddToCurrentSounds);
	   DECLARE_FUNCTION(execKillInstance);
	   DECLARE_FUNCTION(execCanStartInstance);
	   DECLARE_FUNCTION(execIsSchemaPlaying);
	   DECLARE_FUNCTION(execStopMyLoopingSchemas);
	   DECLARE_FUNCTION(execStopAllLoopingSchemas);
	   DECLARE_FUNCTION(execStopAllSchemas);
	   DECLARE_FUNCTION(execStopMySchemas);
	   DECLARE_FUNCTION(execStopSound);
	   DECLARE_FUNCTION(execGetSoundDebugText);
	   DECLARE_FUNCTION(execSetNativeLooping);
	  class AActor*	eventPlaySpecificSoundFromSchema(class UEffectSpecification* GenericSchema, class AActor* Source, INT SpecificSoundRef, class AActor* Target, class UMaterial* TargetMaterial, FVector overrideWorldLocation, FRotator overrideWorldRotation, class IIEffectObserver* Observer)
	  {
        ASoundEffectsSubsystem_eventPlaySpecificSoundFromSchema_Parms Parms;
		   Parms.ReturnValue=0;
		   Parms.GenericSchema=GenericSchema;
		   Parms.Source=Source;
		   Parms.SpecificSoundRef=SpecificSoundRef;
		   Parms.Target=Target;
		   Parms.TargetMaterial=TargetMaterial;
		   Parms.overrideWorldLocation=overrideWorldLocation;
		   Parms.overrideWorldRotation=overrideWorldRotation;
		   Parms.Observer=Observer;
        ProcessEvent(FindFunctionChecked(IGSOUNDEFFECTSSUBSYSTEM_PlaySpecificSoundFromSchema),&Parms);
		   return Parms.ReturnValue;
	  }
	   DECLARE_CLASS(ASoundEffectsSubsystem,AEffectsSubsystem,0|CLASS_Config,IGSoundEffectsSubsystem)
private: 
    void RemoveFromCurrentSounds (ASoundInstance* inInstance);
    // Handles cases where a new sound can overwrite an old sound
    UBOOL HandleOverlap (ASoundInstance* inExistingSound, ASoundInstance* inNewSound);
    UBOOL IsBeingDelayed(ASoundInstance* inInstance);
    UBOOL IsSchemaPlaying(AActor* inSource, FName schemaName);
    class USoundEffectSpecification* GetSpecificationByName( FName SchemaName );
    UBOOL CanStartInstance(ASoundInstance* inInstance);

    // Stop instance will just stop the sample playing, while leaving the SoundInstance updating, this 
    // should NEVER be called by anything outside of ASoundInstance of ASoundEffectsSubsystem.  This is used
    // for non-seamless loops where there is a random delay between loop iterations.  
    void StopInstance (ASoundInstance* inInstance);
    // Requires ASoundInstance to be a friend...
    friend class ASoundInstance;

    // When the UAudioSubsystem stops a sound sample for whatever reason, we need to make sure and cleanup SoundInstance's
    // that reference the sample
    void OnSubsystemStoppedSound( int StoppedHandle );
    // Requires this function to be a friend...
    friend static void GlobalSoundStoppedByAudioSubsystem( int SoundIndex );

    static UAudioSubsystem* AudioSubsystem;

public:
    // Used to register names for events in this package
    void InitExecution();
    void PostScriptDestroyed();
    
    // Returns the duration of the sound
    static FLOAT GetSoundInstanceDuration(ASoundInstance* inInstance);

    // Returns the current UAudioSubsystem...
    static UAudioSubsystem* GetAudio();

    // Stops a sound from playing the actual sound, though it still updates.  Used when a sound is too far away to hear
    void MuteInstance (ASoundInstance* inInstance);
    void UnMuteInstance (ASoundInstance* inInstance);

    // Instance handling functions
    void PlayInstance (ASoundInstance* inInstance);
    void KillInstance (ASoundInstance* inInstance);
#if IG_SWAT
    virtual UBOOL HasContext(AActor* Subject, FName Context);
    virtual INT GetNumAlternateContexts();
#endif

    //declaration of script-side
    //  var private native noexport const int PrecacheNormalSoundEffects[5];
    TSet<USound*> PrecacheNormalSoundEffects;
    //  var private native noexport const int PrecacheStreamingSoundEffects[5];
    TSet<FString> PrecacheStreamingSoundEffects;

    //overridden from EffectsSubsystem
    void PrecacheEffectSpecification(UEffectSpecification* Spec);

    //instruct the engine to precache all assets related to the specified sound effect.
    void PrecacheNormalSoundEffect(USound* SoundEffect);
    void PrecacheStreamingSoundEffect(FString SoundEffect);
};

// Class	ASoundInstance is declared in "..\IGSoundEffectsSubsystem\Classes\SoundInstance.uc"
class IGSOUNDEFFECTSSUBSYSTEM_API	ASoundInstance	: public AActor
{
public:
    class IIEffectObserver* Observer;
    class ASoundEffectsSubsystem* Manager;
    class USoundRef* ActualSound;
    class USoundEffectSpecification* Schema;
    class AActor* Source;
    FVector SavedSourceLocation;
    FLOAT StartTime;
    FLOAT EndTime;
    FLOAT NextPlayTime;
    FLOAT NextStopTime;
    FLOAT Delay;
    INT CurrentLoopCount;
    FRange LoopRange;
    FLOAT FadeInTime;
    FLOAT FadeOutTime;
    FLOAT Pitch;
    FLOAT Volume;
    FLOAT OuterRadius;
    FLOAT InnerRadius;
    BITFIELD Retriggerable:1;
    BITFIELD Paused:1;
    BITFIELD Muted:1;
    BITFIELD Local:1;
    BITFIELD IsEndPredictable:1;
    BITFIELD IsMonoloop:1;
    BITFIELD IsPolyloop:1;
    BITFIELD IsSeamlessLoop:1;
    FLOAT AISoundRadius;
    FName SoundCategory;
    INT Monophonic;
    INT MonophonicPriority;
    INT Priority;
    BITFIELD MonophonicToClass:1;
    INT NativeFlags;
    INT SoundHandle;
    BITFIELD IsPlaying:1;
    BITFIELD IsUpdating:1;
	   DECLARE_FUNCTION(execGetDuration);
	   DECLARE_FUNCTION(execSetVolume);
	   DECLARE_FUNCTION(execSetPitch);
	   DECLARE_FUNCTION(execSetObserver);
	   DECLARE_FUNCTION(execStop);
	   DECLARE_FUNCTION(execPlay);
	  FString	eventtoString()
	  {
        ASoundInstance_eventtoString_Parms Parms;
        ProcessEvent(FindFunctionChecked(IGSOUNDEFFECTSSUBSYSTEM_toString),&Parms);
		   return Parms.ReturnValue;
	  }
	   DECLARE_CLASS(ASoundInstance,AActor,0|CLASS_Config,IGSoundEffectsSubsystem)
private:
    // Returns wether the sound was stopped during the update
    UBOOL   HandleUpdating(FLOAT DeltaTime);
    void    UpdateSourceLocation();
    void    HandleDistanceMuting();
    
    void    CalculateNextPlayTime(FLOAT inCurrentTime);
    friend class USoundEffectSpecification;

public:
    virtual UBOOL Tick( FLOAT DeltaTime, enum ELevelTick TickType );
    void    PlaySound();
    void    StopSound();

    void    MuteSound();
    void    UnMuteSound();

    UBOOL    WantsToLoop();
    FLOAT    GetDuration();

    void    CleanupForDeposit();
};

// Class	ASoundMarkerBase is declared in "..\IGSoundEffectsSubsystem\Classes\SoundMarkerBase.uc"
class IGSOUNDEFFECTSSUBSYSTEM_API	ASoundMarkerBase	: public AActor
{
public:
    BITFIELD QueuedTillStartup:1;
    BITFIELD GameStarted:1;
	   DECLARE_CLASS(ASoundMarkerBase,AActor,0|CLASS_Config,IGSoundEffectsSubsystem)
	   NO_DEFAULT_CONSTRUCTOR(ASoundMarkerBase)
};

// Class	ASoundMarker is declared in "..\IGSoundEffectsSubsystem\Classes\SoundMarker.uc"
class IGSOUNDEFFECTSSUBSYSTEM_API	ASoundMarker	: public ASoundMarkerBase
{
public:
    FStringNoInit Schema1;
    FStringNoInit Schema2;
	   DECLARE_CLASS(ASoundMarker,ASoundMarkerBase,0|CLASS_Config,IGSoundEffectsSubsystem)
	   NO_DEFAULT_CONSTRUCTOR(ASoundMarker)
};

// Class	USoundEffectSpecification is declared in "..\IGSoundEffectsSubsystem\Classes\SoundEffectSpecification.uc"
class IGSOUNDEFFECTSSUBSYSTEM_API	USoundEffectSpecification	: public UEffectSpecification
{
public:
    BYTE VolumeCategory;
    INT SampleRate;
    FLOAT OuterRadius;
    FLOAT InnerRadius;
    INT Volume;
    FLOAT Pitch;
    FLOAT Delay;
    FLOAT Pan;
    FRange PitchRange;
    FRange PanRange;
    FRange Monoloop;
    FPolyLoopStruct Polyloop;
    INT LoopCount;
    FLOAT AISoundRadius;
    FName SoundCategory;
    BITFIELD Local:1;
    BITFIELD NoRepeat:1;
    BITFIELD NeverRepeat:1;
    BITFIELD PlayOnce:1;
    BITFIELD Retriggerable:1;
    FLOAT FadeInTime;
    FLOAT FadeOutTime;
    INT Monophonic;
    INT MonophonicPriority;
    BITFIELD MonophonicToClass:1;
    INT Priority;
    FStringNoInit Caption;
    FName Speaker;
    BITFIELD IsPitchRange:1;
    BITFIELD IsPanRange:1;
    BITFIELD IsMonoloop:1;
    BITFIELD IsPolyloop:1;
    BITFIELD IsSeamlessLoop:1;
    BITFIELD IsEndPredictable:1;
    BITFIELD Killable:1;
    FRange LoopDelayRange;
    INT LoopSoundLimit;
    INT NativeFlags;
    TArrayNoInit<class USoundSet*> SoundSets;
    BITFIELD IsFullyInitialized:1;
	   DECLARE_FUNCTION(execPickSoundToPlay);
	   DECLARE_FUNCTION(execWantsToLoop);
	   DECLARE_FUNCTION(execConstructSoundInstance);
	   DECLARE_FUNCTION(execNativeInitialize);
	  void	eventPopulateSoundsHook()
	  {
		   ProcessEvent(FindFunctionChecked(IGSOUNDEFFECTSSUBSYSTEM_PopulateSoundsHook),NULL);
	  }
	  void	eventInitHook()
	  {
		   ProcessEvent(FindFunctionChecked(IGSOUNDEFFECTSSUBSYSTEM_InitHook),NULL);
	  }
	  void	eventSetNativeFlagsHook()
	  {
		   ProcessEvent(FindFunctionChecked(IGSOUNDEFFECTSSUBSYSTEM_SetNativeFlagsHook),NULL);
	  }
	   DECLARE_CLASS(USoundEffectSpecification,UEffectSpecification,0|CLASS_Config,IGSoundEffectsSubsystem)
    ULevel*         GetLevel();
    void            ParseVariables();
    void            SetNativeFlags();
    void            PopulateSoundSets();
    class USoundRef* PickSoundToPlay(INT inTextureFlags, INT SpecificSoundRef=-1);
    void            HandleLazyInitialization();
    void            HandleLoopingSoundInstance(ASoundInstance* inInstance, FLOAT inCurrentTime);
    void            HandleStartTimeSoundInstance(ASoundInstance* inInstance, FLOAT inCurrentTime, UBOOL inGameStarted);
    void            HandleEndTimeSoundInstance(ASoundInstance* inInstance, FLOAT inCurrentTime);
    void            UpdateHistory(USoundRef* inSoundJustPlayed, INT inTextureFlags);
    USoundSet*      GetAppropriateSoundSet(INT inTextureFlags);
    UBOOL           WantsToLoop();
};

// Class	UNormalSoundEffectSpecification is declared in "..\IGSoundEffectsSubsystem\Classes\NormalSoundEffectSpecification.uc"
class IGSOUNDEFFECTSSUBSYSTEM_API	UNormalSoundEffectSpecification	: public USoundEffectSpecification
{
public:
    TArrayNoInit<FFlaggedSound> FlaggedSounds;
	   DECLARE_CLASS(UNormalSoundEffectSpecification,USoundEffectSpecification,0|CLASS_Config,IGSoundEffectsSubsystem)
	   NO_DEFAULT_CONSTRUCTOR(UNormalSoundEffectSpecification)
};

// Class	UStreamSoundEffectSpecification is declared in "..\IGSoundEffectsSubsystem\Classes\StreamSoundEffectSpecification.uc"
class IGSOUNDEFFECTSSUBSYSTEM_API	UStreamSoundEffectSpecification	: public USoundEffectSpecification
{
public:
    TArrayNoInit<FString> Streams;
    BYTE StreamType;
	   DECLARE_FUNCTION(execPopulateSoundsHook);
	   DECLARE_CLASS(UStreamSoundEffectSpecification,USoundEffectSpecification,0|CLASS_Config,IGSoundEffectsSubsystem)
    // This function registers the streams and precaches any necessary data
    UBOOL UStreamSoundEffectSpecification::RegisterStream(const FString& Filename, INT SampleRate=48000, INT Flags=0  );
};

// Class	USoundRef is declared in "..\IGSoundEffectsSubsystem\Classes\SoundRef.uc"
class IGSOUNDEFFECTSSUBSYSTEM_API	USoundRef	: public UObject
{
public:
    INT SoundSetIndex;
	  FString	eventtoString()
	  {
        USoundRef_eventtoString_Parms Parms;
        ProcessEvent(FindFunctionChecked(IGSOUNDEFFECTSSUBSYSTEM_toString),&Parms);
		   return Parms.ReturnValue;
	  }
	   DECLARE_CLASS(USoundRef,UObject,0,IGSoundEffectsSubsystem)
    // These can't be abstract virtual functions because unreal instantiates a uobject in 
    // a declare class macro.  I could make this class noexport and use DECLARE_ABSTRACT_CLASS
    // but that's a major pain in the ass.
    // TODO: Make these functions either static or truely immutable...
    virtual INT Play(ASoundInstance* inInstance)   { check(false); return 0; }
    virtual void Stop(ASoundInstance* inInstance)   { check(false); }
    virtual void Mute(ASoundInstance* inInstance)   { check(false); }
    virtual void UnMute(ASoundInstance* inInstance) { check(false); }

    virtual void SetPitch(ASoundInstance* inInstance, FLOAT inPitch) { check(false); }
    virtual void SetVolume(ASoundInstance* inInstance, FLOAT inVolume) { check(false); }
    
    virtual FLOAT GetDuration(ASoundInstance* inInstance) { check(false); return 0.0f; }

    // TODO: make the uscrip Equals call the c++ Equals...
    virtual UBOOL Equals(class USoundRef* inOther)
    {
        return this == inOther;
    }
};

// Class	UNormalSoundRef is declared in "..\IGSoundEffectsSubsystem\Classes\NormalSoundRef.uc"
class IGSOUNDEFFECTSSUBSYSTEM_API	UNormalSoundRef	: public USoundRef
{
public:
    class USound* Sound;
	  INT	eventPlayMySound(class ASoundInstance* inInstance)
	  {
        UNormalSoundRef_eventPlayMySound_Parms Parms;
		   Parms.ReturnValue=0;
		   Parms.inInstance=inInstance;
        ProcessEvent(FindFunctionChecked(IGSOUNDEFFECTSSUBSYSTEM_PlayMySound),&Parms);
		   return Parms.ReturnValue;
	  }
	   DECLARE_CLASS(UNormalSoundRef,USoundRef,0,IGSoundEffectsSubsystem)
    virtual INT Play(ASoundInstance* inInstance);
    virtual void Stop(ASoundInstance* inInstance);

    virtual void Mute(ASoundInstance* inInstance);
    virtual void UnMute(ASoundInstance* inInstance);

    virtual FLOAT GetDuration(ASoundInstance* inInstance);

    virtual void SetPitch(ASoundInstance* inInstance, FLOAT inPitch);
    virtual void SetVolume(ASoundInstance* inInstance, FLOAT inVolume);
};

// Class	UStreamSoundRef is declared in "..\IGSoundEffectsSubsystem\Classes\StreamSoundRef.uc"
class IGSOUNDEFFECTSSUBSYSTEM_API	UStreamSoundRef	: public USoundRef
{
public:
    FStringNoInit Stream;
    FLOAT StreamDuration;
	   DECLARE_FUNCTION(execResumeStream);
	   DECLARE_FUNCTION(execPauseStream);
	   DECLARE_FUNCTION(execStopStream);
	   DECLARE_FUNCTION(execPlayStream);
	   DECLARE_CLASS(UStreamSoundRef,USoundRef,0,IGSoundEffectsSubsystem)
    INT Play(ASoundInstance* inInstance);
    void Stop(ASoundInstance* inInstance);
    FLOAT GetDuration(ASoundInstance* inInstance);
    
    void Mute(ASoundInstance* inInstance);
    void UnMute(ASoundInstance* inInstance);
    void SetPitch(ASoundInstance* inInstance, FLOAT inPitch);
    void SetVolume(ASoundInstance* inInstance, FLOAT inVolume);
    void Recompile();
private:
    INT PlayStream(AActor* Actor, FString Filename, INT SampleRate, FLOAT Volume, FLOAT InnerRadius, FLOAT OuterRadius, FLOAT Pitch, INT Priority, INT Flags, FLOAT FadeInTime, FLOAT AISoundRadius, FName SoundCategory);
    void StopStream(ASoundInstance* inInstance);
};

// Class	USoundSet is declared in "..\IGSoundEffectsSubsystem\Classes\SoundSet.uc"
class IGSOUNDEFFECTSSUBSYSTEM_API	USoundSet	: public UObject
{
public:
    TArrayNoInit<class USoundRef*> AllSounds;
    TArrayNoInit<BYTE> StatusArray;
    class USoundRef* LastSoundUsed;
	   DECLARE_FUNCTION(execAddSoundRef);
	   DECLARE_CLASS(USoundSet,UObject,0,IGSoundEffectsSubsystem)
    // Returns true if there are no available sounds to play
    UBOOL IsAvailableEmpty();
    // Free up the soundref to be picked
    void  MakeSoundAvailable (class USoundRef* inSoundRef);
    // Make all sounds used, so this SoundSet will no longer return sounds
    void MakeNoSoundsAvailable ();
    // Free up all sounds to be picked
    void  MakeAllSoundsAvailable();
    // Pick a random sound from the available list of sounds
    class USoundRef* PickRandomSound (class USoundRef* inExcludedSoundRef = NULL);
    // Use up a sound 
    void  UseSound (class USoundRef* inSoundRef);
    
    // Return the specific sound ref specified, will NOT use up the sound.  Client is required to do all setup work.
    class USoundRef* GetSoundRef( INT Index );

    // Add sounds to the set...
    void  AddSound (USound* inSound);
    void  AddStream (FString inStream);
    void  AddSoundRef (class USoundRef* inRef);

};

// Class	USpeakers is declared in "..\IGSoundEffectsSubsystem\Classes\Speakers.uc"
class IGSOUNDEFFECTSSUBSYSTEM_API	USpeakers	: public UObject
{
public:
    TArrayNoInit<FSpeakerInfo> Speaker;
	   DECLARE_CLASS(USpeakers,UObject,0|CLASS_Config,IGSoundEffectsSubsystem)
	   NO_DEFAULT_CONSTRUCTOR(USpeakers)
};

#endif

AUTOGENERATE_FUNCTION(USoundEffectSpecification,-1,execPickSoundToPlay);
AUTOGENERATE_FUNCTION(USoundEffectSpecification,-1,execWantsToLoop);
AUTOGENERATE_FUNCTION(USoundEffectSpecification,-1,execConstructSoundInstance);
AUTOGENERATE_FUNCTION(USoundEffectSpecification,-1,execNativeInitialize);
AUTOGENERATE_FUNCTION(ASoundEffectsSubsystem,-1,execPostLoaded);
AUTOGENERATE_FUNCTION(ASoundEffectsSubsystem,-1,execHasAudioHardware);
AUTOGENERATE_FUNCTION(ASoundEffectsSubsystem,-1,execNativeInitialize);
AUTOGENERATE_FUNCTION(ASoundEffectsSubsystem,-1,execCreateSoundInstance);
AUTOGENERATE_FUNCTION(ASoundEffectsSubsystem,-1,execAddToCurrentSounds);
AUTOGENERATE_FUNCTION(ASoundEffectsSubsystem,-1,execKillInstance);
AUTOGENERATE_FUNCTION(ASoundEffectsSubsystem,-1,execCanStartInstance);
AUTOGENERATE_FUNCTION(ASoundEffectsSubsystem,-1,execIsSchemaPlaying);
AUTOGENERATE_FUNCTION(ASoundEffectsSubsystem,-1,execStopMyLoopingSchemas);
AUTOGENERATE_FUNCTION(ASoundEffectsSubsystem,-1,execStopAllLoopingSchemas);
AUTOGENERATE_FUNCTION(ASoundEffectsSubsystem,-1,execStopAllSchemas);
AUTOGENERATE_FUNCTION(ASoundEffectsSubsystem,-1,execStopMySchemas);
AUTOGENERATE_FUNCTION(ASoundEffectsSubsystem,-1,execStopSound);
AUTOGENERATE_FUNCTION(ASoundEffectsSubsystem,-1,execGetSoundDebugText);
AUTOGENERATE_FUNCTION(ASoundEffectsSubsystem,-1,execSetNativeLooping);
AUTOGENERATE_FUNCTION(ASoundInstance,-1,execGetDuration);
AUTOGENERATE_FUNCTION(ASoundInstance,-1,execSetVolume);
AUTOGENERATE_FUNCTION(ASoundInstance,-1,execSetPitch);
AUTOGENERATE_FUNCTION(ASoundInstance,-1,execSetObserver);
AUTOGENERATE_FUNCTION(ASoundInstance,-1,execStop);
AUTOGENERATE_FUNCTION(ASoundInstance,-1,execPlay);
AUTOGENERATE_FUNCTION(USoundSet,-1,execAddSoundRef);
AUTOGENERATE_FUNCTION(UStreamSoundEffectSpecification,-1,execPopulateSoundsHook);
AUTOGENERATE_FUNCTION(UStreamSoundRef,-1,execResumeStream);
AUTOGENERATE_FUNCTION(UStreamSoundRef,-1,execPauseStream);
AUTOGENERATE_FUNCTION(UStreamSoundRef,-1,execStopStream);
AUTOGENERATE_FUNCTION(UStreamSoundRef,-1,execPlayStream);

#ifndef NAMES_ONLY
#undef AUTOGENERATE_NAME
#undef AUTOGENERATE_FUNCTION
#endif

#if SUPPORTS_PRAGMA_PACK
#pragma pack	(pop)
#endif

#ifdef VERIFY_CLASS_SIZES
VERIFY_CLASS_SIZE_NODIE(AActorBank)
VERIFY_CLASS_SIZE_NODIE(UNormalSoundEffectSpecification)
VERIFY_CLASS_SIZE_NODIE(UNormalSoundRef)
VERIFY_CLASS_SIZE_NODIE(USoundEffectSpecification)
VERIFY_CLASS_SIZE_NODIE(ASoundEffectsSubsystem)
VERIFY_CLASS_SIZE_NODIE(ASoundInstance)
VERIFY_CLASS_SIZE_NODIE(ASoundMarker)
VERIFY_CLASS_SIZE_NODIE(ASoundMarkerBase)
VERIFY_CLASS_SIZE_NODIE(USoundRef)
VERIFY_CLASS_SIZE_NODIE(USoundSet)
VERIFY_CLASS_SIZE_NODIE(USpeakers)
VERIFY_CLASS_SIZE_NODIE(UStreamSoundEffectSpecification)
VERIFY_CLASS_SIZE_NODIE(UStreamSoundRef)
#endif // VERIFY_CLASS_SIZES
