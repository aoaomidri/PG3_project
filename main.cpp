#include<iostream>
#include<vector>
#include<string>

int main() {
    std::vector<std::string> data;
    std::string x ;

    while (true) {
        std::cin >> x;
        if (x == "0") break;
        data.push_back(x);

    }


    for (size_t i = 0; i < data.size(); i++) {
        int a = 0;
        for (size_t j = 0; j < data[i].size(); j++){
            a += data[i][j] - '0';

        } 
        std::cout << a << std::endl;
    }


    return 0;
}