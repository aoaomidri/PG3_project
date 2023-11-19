#pragma once
#include"Weapon.h"
class Club : public Weapon{
public:
	Club();
	~Club();

	void ViewStatus()override;

};

