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

	makeComment("í“¬I—¹!");
}

void Enemy::Attack() {
	makeComment("“G‚Í‰s‚¢’Ü‚ÅUŒ‚‚µ‚Ä‚«‚½!\n");
	Sleep(sleepTime);
	phase_ = Phase::Shot;
}

void Enemy::Shot() {
	makeComment("“G‚Í–Ø‚ğ“ã‚¬•¥‚Á‚Ä”j•Ğ‚ğ”ò‚Î‚µ‚Ä‚«‚½!\n");
	Sleep(sleepTime);
	phase_ = Phase::Leave;
}

void Enemy::Leave() {
	makeComment("“G‚Í‹‚Á‚Ä‚¢‚Á‚½EEE\n");
	Sleep(sleepTime);
	phase_ = Phase::End;
}

void Enemy::makeComment(const char* message){
	std::cout << message << std::endl;
}
