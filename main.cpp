#include <iostream>
#include<thread>
void DrawThread(int num) {
    std::cout << "thread " << num << std::endl;
}

void DrawThreadAddOne(int num) {
    num += 1;
    DrawThread(num);
}

void DrawThreadAddTwo(int num) {
    num += 2;
    DrawThread(num);
}

int main() {
    int num = 1;

    std::thread th1(DrawThread, num);
    th1.join();
    std::thread th2(DrawThreadAddOne, num);
    th2.join();
    std::thread th3(DrawThreadAddTwo, num);
    th3.join();

    return 0;
}