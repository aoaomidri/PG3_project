#pragma once
#include<iostream>
class Weapon{
public:
	Weapon();
	virtual ~Weapon();
	virtual void ViewStatus();
protected:
	const char* name_;
};

