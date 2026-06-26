// author https://github.com/MIrrox27/ASCII-Camera
// src/main.cpp

#include <opencv2/opencv.hpp>
#include <iostream>

int main() {
    setlocale(LC_ALL, "Russian");


    // Открываем камеру по умолчанию (в моем случае 1 - встроенная в ноутбук)
    cv::VideoCapture cap(1);
    
    if (!cap.isOpened()) {
        std::cerr << "-1 Ошибка" << std::endl;
        return -1;
    }

    std::cout << "0 Камера запустилась" << std::endl;
    return 0;
}