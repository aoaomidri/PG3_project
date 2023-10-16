#pragma once
#include<iostream>
#include<Windows.h>
class Enemy{
public:
	void Initialize();

	void Update();

public:
	//ßÚU
	void Attack();
	//ËU
	void Shot();
	//£E
	void Leave();
	//í¬I¹
	void End();

private:
	//std::coutÈªÖ
	void makeComment(const char* message);

private:
	static void(Enemy::* enFuncTable[])();

	enum class Phase{
		Attack,
		Shot,
		Leave,
		End,
	};

	//tF[Y
	Phase phase_;

	//X[vÌÔ
	int sleepTime;
};

