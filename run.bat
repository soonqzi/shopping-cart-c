@echo off

gcc -Wall -Wextra -std=c11 main.c -o shopping-cart.exe

if errorlevel 1 (
    echo Compilation failed. 
    pause
    exit /b 1
)

echo Starting Soon Qz's Shopping Cart Program...
shopping-cart.exe

pause