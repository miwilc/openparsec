OpenParsec
==========

To build OpenParsec:

On Linux:
- Install premake or grab the premake4 binary and put it somewhere in your $PATH (http://industriousone.com/premake/download)
- cd into platforms/premake/
- run: premake4 gmake
- To build the client: make client
- To build the server: make server
- To build both targets: make

On Wintendo:
-Visual studio 2012 express and up supported
-Open the solution file in platforms\vs2012
-Build solution
-You will need to get the runtime dll libraries for SDL2 and SDL2_mixer from http://libsdl.org

On Mac OS X
-You will need XCode
-Open the project in platforms\xcode
-Select your target as either parsec or parsec_server
-Build the project

NOTES:
- There is no install script yet
- premake binaries get copied into parsec_root/{client,server}
- You will need a copy of the openparsec-assets to run the client (https://github.com/OpenParsec/openparsec-assets)
- For Raspberry Pi there is a special premake-rpi folder set up to link to GLES. You will need the broadcom packages installed in addition to SDL2 and SDl2_mixer
