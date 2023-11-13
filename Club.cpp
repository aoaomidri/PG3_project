#include "Club.h"

Club::Club(const char* name){
	name_ = name;
}

Club::~Club(){
}

void Club::ViewStatus(){	
	std::cout << name_ << "は打属性" << std::endl;
	Weapon::ViewStatus();
}

