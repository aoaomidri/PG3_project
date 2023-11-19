#include "Sword.h"

Sword::Sword(){
	name_ = "錆びた剣";
}

Sword::~Sword(){
}

void Sword::ViewStatus(){
	std::cout << name_ << "は斬属性" << std::endl;
	Weapon::ViewStatus();
}
