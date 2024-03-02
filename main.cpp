#include<iostream>
#include<string>
#include<cctype>

int main() {
    int data[26]{};
    std::string line;

    while (std::getline(std::cin, line)){

        if (line.empty()){
            break;
        }

        for (char c : line) {
            if (std::isalpha(c)){
                data[std::tolower(c) - 'a']++;

            }
        }
    }

    for (int i = 0; i < 26; i++){
        std::cout << static_cast<char>(i + 'a') << " : " << data[i] << std::endl;
    }


    return 0;
}