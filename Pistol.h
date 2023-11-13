#pragma once
#include"Weapon.h"
class Pistol : public Weapon {
public:
	Pistol(const char* name);
	~Pistol();

	void ViewStatus()override;

	
};

