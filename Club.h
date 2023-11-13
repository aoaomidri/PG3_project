#pragma once
#include"Weapon.h"
class Club : public Weapon{
public:
	Club(const char* name);
	~Club();

	void ViewStatus()override;

};

