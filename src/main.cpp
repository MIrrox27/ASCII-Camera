// author https://github.com/MIrrox27/ASCII-Camera
// src/main.cpp

#include <opencv2/opencv.hpp>
#include <iostream>
#include "console.hpp"
#include <cstdlib>
#include <string>


int main() {
    int width = 10;
    int height = 10;

    consoleSize(width, height);
    char gradient[12] = " .,^:;!$#%@";
    
 
    for (int i = 0; i <= 10; i++) {
        cv::VideoCapture cap(i);

        if (cap.isOpened()) {
        std::cout << "\n\n --- Camera was started! Index: " << i << std::endl;
        break;
        }
    }
    clearScreen();
    moveCursor(0, 0);
    while (true){
    }
    

    return 0;
}