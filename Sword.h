#pragma once
#include"Weapon.h"
class Sword: public Weapon{
public:
	Sword(const char* name);
	~Sword();

	void ViewStatus()override;

};

