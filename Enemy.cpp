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

	makeComment("戦闘終了!");
}

void Enemy::Attack() {
	makeComment("敵は鋭い爪で攻撃してきた!\n");
	Sleep(sleepTime);
	phase_ = Phase::Shot;
}

void Enemy::Shot() {
	makeComment("敵は木を薙ぎ払って破片を飛ばしてきた!\n");
	Sleep(sleepTime);
	phase_ = Phase::Leave;
}

void Enemy::Leave() {
	makeComment("敵は去っていった・・・\n");
	Sleep(sleepTime);
	phase_ = Phase::End;
}

void Enemy::makeComment(const char* message){
	std::cout << message << std::endl;
}
