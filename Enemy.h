#pragma once
#include<iostream>
#include<Windows.h>
class Enemy{
public:
	void Initialize();

	void Update();

public:
	//近接攻撃
	void Attack();
	//射撃攻撃
	void Shot();
	//離脱
	void Leave();

private:
	//std::cout省略関数
	void makeComment(const char* message);

private:
	static void(Enemy::* enFuncTable[])();

	enum class Phase{
		Attack,
		Shot,
		Leave,
		End,
	};

	//フェーズ
	Phase phase_;

	//スリープの時間
	int sleepTime;
};

