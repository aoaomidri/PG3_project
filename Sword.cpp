#include "Sword.h"

Sword::Sword(const char* name){
	name_ = name;
}

Sword::~Sword(){
}

void Sword::ViewStatus(){
	std::cout << name_ << "は斬属性" << std::endl;
	Weapon::ViewStatus();
}
