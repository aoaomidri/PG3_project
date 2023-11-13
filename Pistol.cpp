#include "Pistol.h"

Pistol::Pistol(const char* name){
	name_ = name;
}

Pistol::~Pistol(){
}

void Pistol::ViewStatus(){
	std::cout << name_ << "は突属性" << std::endl;
	Weapon::ViewStatus();
}
