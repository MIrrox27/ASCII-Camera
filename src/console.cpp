// author https://github.com/MIrrox27/ASCII-Camera
// src/console.cpp


#include <cstdlib>
#include <windows.h>
#include "console.hpp"

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