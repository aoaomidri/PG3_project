#pragma once
class Enemy{
public:
	void Initialize();

	void Update();

public:
	//‹ßÚUŒ‚
	void Attack();
	//ËŒ‚UŒ‚
	void Shot();
	//—£’E
	void Leave();

private:
	static void(Enemy::* enFuncTable[])();

};

