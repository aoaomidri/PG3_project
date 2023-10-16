#include "Enemy.h"
void (Enemy::* Enemy::enFuncTable[])() = {
	&Enemy::Attack,
	&Enemy::Shot,
	&Enemy::Leave
};

void Enemy::Initialize() {

}

void Enemy::Update() {

}

void Enemy::Attack() {

}

void Enemy::Shot() {

}

void Enemy::Leave() {

}
