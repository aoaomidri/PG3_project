#pragma once
class Enemy{
public:
	void Initialize();

	void Update();

public:
	//�ߐڍU��
	void Attack();
	//�ˌ��U��
	void Shot();
	//���E
	void Leave();

private:
	static void(Enemy::* enFuncTable[])();

};

