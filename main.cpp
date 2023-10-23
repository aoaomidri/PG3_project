﻿#include"Weapon.h"
#include"Sword.h"
#include"Pistol.h"
#include"Club.h"

int main(void) {
	const int weaponNum = 3;

	Weapon* weapon_[weaponNum]{};

	weapon_[0] = new Sword;
	weapon_[1] = new Pistol;
	weapon_[2] = new Club;

	for (int i = 0; i < weaponNum; i++){
		weapon_[i]->ViewStatus();
	}
	for (int i = 0; i < weaponNum; i++){
		delete weapon_[i];
	}

	return 0;
}

