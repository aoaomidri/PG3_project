#pragma once
#include<iostream>
#include<Windows.h>
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
	//�퓬�I��
	void End();

private:
	//std::cout�ȗ��֐�
	void makeComment(const char* message);

private:
	static void(Enemy::* enFuncTable[])();

	enum class Phase{
		Attack,
		Shot,
		Leave,
		End,
	};

	//�t�F�[�Y
	Phase phase_;

	//�X���[�v�̎���
	int sleepTime;
};

