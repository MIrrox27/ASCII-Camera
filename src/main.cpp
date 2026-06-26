// author https://github.com/MIrrox27/ASCII-Camera
// src/main.cpp

#include <opencv2/opencv.hpp>
#include <iostream>

int main() {
    char gradient[12] = " .,^:;!$#%@";
 
    for (int i = 0; i <= 10; i++) {
        cv::VideoCapture cap(i);

        if (cap.isOpened()) {
        std::cout << "\n\n --- Camera was started! Index: " << i << std::endl;
        break;
        }

    }
    return 0;
}