# Shopping Cart Simulator in C

A mini software project, programmed in C. Made to kickstart my journey in tech, this program helps me learn and practice programming fundamentals, as well as version control with Git and GitHub.

## Features

- Console-based user interface
- Compile with GCC using the C11 standard
- Lightweight and easy to run

## Technology used

- C
- Standard C Library
- Git and GitHub

## Prerequisites

Before running this application, install:

- Git
- GCC (GNU Compiler Collection)

## Don't have GCC installed?

### Windows

1. Open the MSYS2 website at https://www.msys2.org/
2. Scroll through to Installation and download the installer. Make sure you are using 64 bit Windows 10 or newer.
3. Use the MSYS2 software to download the C compiler. Run this command:

```
pacman -S mingw-w64-ucrt-x86_64-gcc
```

4. Verify the installation:

```
gcc --version
```

It should display the current version of the C compiler you're using. 5. Set variable path.

### Find the C compiler in your computer's files.

- Click on msys64 > ucrt64 > bin > gcc.exe
- right click on gcc.exe > properties > copy the file location.
- Search for 'environment variables' in your Windows system, and click on 'Edit the system environment variables'.
- click environment variables > select path > edit > new, then paste the path (its most likely C:\msys54\ucrt64\bin).
Press OK and you're done.

### macOS

1. Open Terminal.
2. Run:

```
xcode-select --install
```

3. Follow the installation prompts.
4. Verify the installation:

```
gcc --version
```

### Linux

1. In your IDE's terminal, run the following command:

```
suo apt-get install build-essential gdb
```

2. Verify the installation:

```
sudo apt-get update
```

## How to Install

1. Clone the repository

```git clone
https://github.com/soonqzi/shopping-cart-c.git
```

2. Navigate to the project directory

```
cd shopping-cart-c
```

3. Compile the program

```
gcc -Wall -Wextra -std=c11 main.c -o shopping-cart
```

4. Run the application

Windows (GCC/MinGW):

```
gcc -Wall -Wextra -std=c11 main.c -o shopping-cart.exe .\shopping-cart.exe
```

Linux/macOS:

```
./shopping-cart
```
