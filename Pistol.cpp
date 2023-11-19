#include "Pistol.h"

Pistol::Pistol(){
	name_ = "拳銃";
}

Pistol::~Pistol(){
}

void Pistol::ViewStatus(){
	std::cout << name_ << "は突属性" << std::endl;
	Weapon::ViewStatus();
}
