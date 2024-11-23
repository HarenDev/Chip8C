# Chip8C(++)
Chip8 emulator written in C++, using Raylib (a C library). (I'll change more of the readme later)

# TODO (In no order, may add more later):
* File Loading/Reading
* Implment all 35 Opcodes
* Figure out Emulation Cycles
* Figure out graphics
* Figure out input
* Figure out main program loop
* Do sound (maybe)

## Supported Platforms
Quickstart supports the main 3 desktop platforms
* Windows
* Linux
* MacOS

# VSCode Users (all platforms)
* Download the quickstart
* Rename the folder to your game name
* Open the folder in VSCode.
* Press F5 to build
* You are good to go.

# Windows Users
There are two compiler toolchains available for windows, MinGW-W64 (a free compiler using GCC), and Microsoft Visual Studio
## Using MinGW-W64
* Double click the build-MinGW-W64.bat file.
* cd into the folder in your terminal
* run make
* You are good to go

### Note on MinGW-64 versions
Make sure you have a modern version of MinGW-W64 (not mingw).
The best place to get it is from the W64devkit from
https://github.com/skeeto/w64devkit/releases
or the version installed with the raylib installer
#### If you have installed rayib from the installer
Make sure you have added the path

 C:\raylib\w64devkit\bin 

To your path environment varialbe so that the compiler that came with raylib can be found..

DO NOT INSALL ANOTHER MinGW-W64 from another source such as msys2, you don't need it.

## Microsoft Visual Studio
* Run the build-VisualStudio2022.bat
* double click the .sln file that is geneated.
* develop your game
* you are good to go.

# Linux Users
* CD into the build folder
* run ./premake5 gmake2
* CD back to the root
* run make
* you are good to go

# MacOS Users
* CD into the build folder
* run ./premake5.osx gmake2
* CD back to the root
* run make
* you are good to go

# Output files
The built code will be in the bin dir

# License
Copyright (c) 2020-2024 Jeffery Myers

This software is provided "as-is", without any express or implied warranty. In no event 
will the authors be held liable for any damages arising from the use of this software.

Permission is granted to anyone to use this software for any purpose, including commercial 
applications, and to alter it and redistribute it freely, subject to the following restrictions:

  1. The origin of this software must not be misrepresented; you must not claim that you 
  wrote the original software. If you use this software in a product, an acknowledgment 
  in the product documentation would be appreciated but is not required.

  2. Altered source versions must be plainly marked as such, and must not be misrepresented
  as being the original software.

  3. This notice may not be removed or altered from any source distribution.
