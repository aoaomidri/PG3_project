#pragma once
#include<iostream>
#include<Windows.h>
class Enemy{
public:
	void Initialize();

	void Update();

public:
	//
	void Attack();
	//
	void Shot();
	//
	void Leave();

private:
	//std::cout
	void makeComment(const char* message);

private:
	static void(Enemy::* enFuncTable[])();

	enum class Phase{
		Attack,
		Shot,
		Leave,
		End,
	};

	//
	Phase phase_;

	//
	int sleepTime;
};

