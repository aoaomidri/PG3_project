#include<iostream>
#include<random>
#include<Windows.h>
#include<functional>
typedef void (*pFunc)(int, int, int);

std::function<void(void)>setTimeout(pFunc p, int SleepTime, int RandNumber, int SelectNumber) {
	std::cout << "さぁ、どうでしょうか・・・" << std::endl;
	Sleep(SleepTime);
	p(SleepTime, RandNumber, SelectNumber);
}

void Judgement(int SleepTime, int RandNumber, int SelectNumber) {
	std::cout << "賽の目は " << RandNumber << " です。" << std::endl;

	if (RandNumber % 2 == SelectNumber) {
		std::cout << "あなたの、勝ちです。" << std::endl;
	}
	else {
		std::cout << "あなたの負けです。" << std::endl;
	}
}

void DiceChallenge(int SleepTime, int RandNumber, int SelectNumber) {

	std::cout << "賽が奇数と予想するなら「1」、偶数と予想するなら「0」を入力してください。" << std::endl;
	std::cin >> SelectNumber;

	while (SelectNumber >= 2 || SelectNumber < 0) {
		std::cout << "賽が奇数と予想するなら「1」、偶数と予想するなら「0」を入力してください。" << std::endl;
		std::cin >> SelectNumber;
	}

	if (SelectNumber == 0) {
		setTimeout(Judgement, SleepTime, RandNumber, SelectNumber);
	}
	else if (SelectNumber == 1) {
		setTimeout(Judgement, SleepTime, RandNumber, SelectNumber);
	}
}

int main(void) {
	std::random_device seed_gen;
	std::mt19937 engine(seed_gen());
	auto random = [](std::mt19937 en) {return en() % 6 + 1; };

	int randNumber = random(engine);
	int PLSelectNumber = 0;
	int sleepTime = 3 * 1000;

	DiceChallenge(sleepTime, randNumber, PLSelectNumber);


	return 0;
}