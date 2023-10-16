#include "Enemy.h"
void (Enemy::* Enemy::enFuncTable[])() = {
	&Enemy::Attack,
	&Enemy::Shot,
	&Enemy::Leave
};

void Enemy::Initialize() {
	phase_ = Phase::Attack;

	sleepTime = 1 * 1000;
}

void Enemy::Update() {
	while (phase_ != Phase::End) {
		(this->*enFuncTable[static_cast<size_t>(phase_)])();
	}

	makeComment("�퓬�I��!");
}

void Enemy::Attack() {
	makeComment("�G�͉s���܂ōU�����Ă���!\n");
	Sleep(sleepTime);
	phase_ = Phase::Shot;
}

void Enemy::Shot() {
	makeComment("�G�͖؂�ガ�����Ĕj�Ђ��΂��Ă���!\n");
	Sleep(sleepTime);
	phase_ = Phase::Leave;
}

void Enemy::Leave() {
	makeComment("�G�͋����Ă������E�E�E\n");
	Sleep(sleepTime);
	phase_ = Phase::End;
}

void Enemy::makeComment(const char* message){
	std::cout << message << std::endl;
}
