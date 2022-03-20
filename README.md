# **SDL2-Sample-Project**

SDL2 Sample Project for Visual Studio Code

# How to compile?

In ../src execute: **mingw32-make**

# **Folders**

../bin - **Binary code of your game (compiler export location)**

../include - **Header Files**

../lib - **Libraries**

../src - **Source code your game**

# **Makefile for Windows** (../src/Makefile)

g++ ../src/main.cpp -o ../bin/game.exe -L ../lib/ -I ../include/ -lmingw32 -lSDL2main -lSDL2

**-o** - output

**-I** - Include Folder

**-L** - lib Folder

# Have Fun!
