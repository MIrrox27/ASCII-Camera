// author https://github.com/MIrrox27/ASCII-Camera
// src/console.cpp

// Проект заморожен, так как у меня не работают зависимости с CMake 

#include <cstdlib>
#include <windows.h>
#include "console.hpp"
#include <iostream>
#include <opencv2/opencv.hpp>


using namespace std;

void clearScreen(){
      #ifdef _WIN32
        system("cls"); 
    #else
        system("clear"); 
    #endif
}

void moveCursor(int x, int y) {
  COORD coord;
  coord.X = x;
  coord.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

}

int consoleSize(int x, int y){
    HWND hwnd = GetConsoleWindow();
    if (hwnd == NULL) return 1;
    Sleep(10);

    
    HWND owner = GetWindow(hwnd, GW_OWNER);
    if (owner == NULL) {
        SetWindowPos(hwnd, nullptr, 0, 0, x, y, SWP_NOZORDER | SWP_NOMOVE);
    } else {
        SetWindowPos(owner, nullptr, 0, 0, x, y, SWP_NOZORDER | SWP_NOMOVE);
    }
    return 0;
}

