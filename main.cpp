#include <iostream>
#include <string>
#include<cctype>

int main() {
	std::string result;
	std::string text;
	std::getline(std::cin, result);

	for (size_t i = 0; i < result.size(); i++){
		char c = result.at(i);
		if (isupper(c)) {
			c = tolower(c);
		}
		else if (islower(c)) {
			c = toupper(c);
		}
		else {
			
		}

		text.push_back(c);
	}

	std::cout << text << std::endl;
}