// author https://github.com/MIrrox27/ASCII-Camera
// src/console.cpp


#include <cstdlib>
#include <windows.h>
#include "console.hpp"
#include <iostream>

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

void consoleSize(int x, int y){
  string command = "mode con cols=" + to_string(x) + " lines=" + to_string(y);
  system(command.c_str());
}
