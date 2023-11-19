#include "Club.h"

Club::Club(){
	name_ = "こん棒";
}

Club::~Club(){
}

void Club::ViewStatus(){	
	std::cout << name_ << "は打属性" << std::endl;
	Weapon::ViewStatus();
}

