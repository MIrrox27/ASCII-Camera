// author https://github.com/MIrrox27/ASCII-Camera
// src/main.cpp

// Проект заморожен, так как у меня не работают зависимости с CMake 

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
    while (true){
        cap >> frame;

        if (frame.empty()) {
            std::cerr << "Пустой кадр!" << std::endl;
            break;
        }

        cv::cvtColor(frame, gray, cv::COLOR_BGR2GRAY);

        cv::imshow("Цветной кадр", frame);
        cv::imshow("Черно-белый кадр", gray);

        char key = cv::waitKey(30);  // ждём 30 мс
        if (key == 27) {             // ESC
            break;
        }
        if (key == 's' || key == 'S') {
            // Сохраняем grayscale кадр в файл
            cv::imwrite("snapshot_grayscale.jpg", gray);
            std::cout << "Кадр сохранён как snapshot_grayscale.jpg" << std::endl;
        }
    }
    


        // освобождаем ресурсы
    cap.release();
    std::cout << "Programm ended" << std::endl;
    return 0;
}

