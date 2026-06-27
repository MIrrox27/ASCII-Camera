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

int consoleSize(int x, int y){
    cout << 1 << endl;
    HWND hwnd = GetConsoleWindow();
    if (hwnd == NULL) return;

    // Небольшая задержка для инициализации окна (особенно важно при запуске)
    Sleep(10);

    // Получаем владельца окна (для Windows 11)
    HWND owner = GetWindow(hwnd, GW_OWNER);
    if (owner == NULL) {
        // Windows 10 и старше
        SetWindowPos(hwnd, nullptr, 0, 0, x, y, SWP_NOZORDER | SWP_NOMOVE);
    } else {
        // Windows 11
        SetWindowPos(owner, nullptr, 0, 0, x, y, SWP_NOZORDER | SWP_NOMOVE);
    }
}