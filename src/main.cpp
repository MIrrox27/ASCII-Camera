// author https://github.com/MIrrox27/ASCII-Camera
// src/main.cpp

#include <opencv2/opencv.hpp>
#include <iostream>
#include "console.hpp"
#include <cstdlib>
#include <string>
#include <math.h>
#include <windows.h>


int main() {
    int width = 120;
    int height = 30;
    //consoleSize(width, height);

    char gradient[12] = " .,^:;!$#%@";
    std::cout << 1 << std::endl;  
    cv::VideoCapture cap;
    
 
    for (int i = 0; i <= 10; i++) {
        cap.open(i);

        if (cap.isOpened()) {
        std::cout << "\n\n --- Camera was started! Index: " << i << std::endl;
        break;
        }
    }

    if (!cap.isOpened()) {
        std::cout << "Error: Camera not found!" << std::endl;
        return -1;
    }

   // clearScreen();
   // moveCursor(0, 0);
    std::cout << 1 << std::endl;  

    cv::Mat frame;
    cv::Mat gray;

    while (true){
        cap >> frame;

        // Проверяем, что кадр не пустой 
        if (frame.empty()) {
            std::cout << "Blank frame grabbed" << std::endl;
            continue;
        }

        cv::cvtColor(frame, gray, cv::COLOR_BGR2GRAY);
        cv::imshow("Photo", gray);
        cv::waitKey(1); // нужно для обновления окна

        if (cv::waitKey(1) == 27) {
            break;
        }
    }
    

    return 0;
}