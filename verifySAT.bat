@echo off

REM Tell the user that we are compiling the mod

echo Verifying files for devMod

REM Run UCC.exe from inside devMod\System, so that the
REM compiler uses the mod's initialisation files and settings
REM and stores the compiled output in the devMod\System
REM directory

cd .\System\ 

..\..\ContentExpansion\System\UCC.exe mastermd5 -c

REM Tell the user that the game has exited, and wait for a keypress

cd ..

echo Finished verifying devMod
PAUSE
