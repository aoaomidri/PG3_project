#include "Club.h"

Club::Club(){
	name = "こん棒";
	std::cout << name << "を手に入れた" << std::endl;
	std::cout << "\0" << std::endl;
}

Club::~Club(){
	std::cout << name << "は壊れてしまった・・・" << std::endl;
	std::cout << "\0" << std::endl;
}

void Club::ViewStatus(){
	std::cout << name << "の攻撃力は 12だ。" << std::endl;
	std::cout << name << "の耐久力は 15だ。" << std::endl;
	std::cout << "\0" << std::endl;
}

