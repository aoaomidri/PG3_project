#include<iostream>
#include<string>
#include<chrono>
#include<thread>

int main(void) {
	std::string a(100000, 'a');

	auto nowTime = std::chrono::steady_clock::now();
	
	std::string copyOnly = a;

	auto copyTime = std::chrono::steady_clock::now();

	std::cout << "copyTime : " <<
		std::chrono::duration_cast<std::chrono::microseconds>(copyTime - nowTime) << std::endl;
	
	nowTime = std::chrono::steady_clock::now();
	
	std::string moveOnly = std::move(a);

	auto moveTime = std::chrono::steady_clock::now();

	std::cout << "moveTime : " <<
		std::chrono::duration_cast<std::chrono::microseconds>(moveTime - nowTime) << std::endl;

	return 0;
}