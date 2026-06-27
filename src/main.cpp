// author https://github.com/MIrrox27/ASCII-Camera
// src/main.cpp

#include <opencv2/opencv.hpp>
#include <iostream>
#include "console.hpp"


int main() {
    int width = 120;
    int height = 30;

    char gradient[12] = " .,^:;!$#%@";
    cv::VideoCapture cap;
 
    for (int i = 0; i <= 10; i++) {
        cap.open(i);
        if (cap.isOpened()) {
        std::cout << "\n\n --- Camera was started! Index: " << i << std::endl;
        break;
        }
    } 

        // настраиваю кармеры
    cap.set(cv::CAP_PROP_FRAME_WIDTH, width);
    cap.set(cv::CAP_PROP_FRAME_HEIGHT, height);
    cap.set(cv::CAP_PROP_FPS, 30);


    clearScreen();
    moveCursor(0, 0);

     cv::Mat frame, gray;

    while (true)
    {
        
    }
    


        // освобождаем ресурсы
    cap.release();
    //cv::destroyAllWindows();
    std::cout << "Programm ended" << std::endl;
    return 0;
}