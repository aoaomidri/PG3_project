#include<iostream>
#define _USE_MATH_DEFINES
#include<math.h>
#include<string>

int main() {
    std::string filePath = "resources/uvChecker.png";

    size_t slashPos = filePath.find_last_of('/');
    size_t dotPos = filePath.find_last_of('.');

    if (slashPos != std::string::npos && dotPos != std::string::npos && dotPos > slashPos) {
        std::string result = filePath.substr(slashPos + 1, dotPos - slashPos - 1);
        std::cout << result << std::endl;
    }
    else {
        std::cout << "Substring not found." << std::endl;
    }

    return 0;

}