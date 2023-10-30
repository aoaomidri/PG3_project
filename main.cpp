#include<iostream>
#include<random>
#include<Windows.h>
typedef void (*pFunc)(int, int, int);

void setTimeout(pFunc p, int SleepTime, int RandNumber, int SelectNumber) {
	std::cout << "さぁ、どうでしょうか・・・" << std::endl;
	Sleep(SleepTime);
	p(SleepTime, RandNumber, SelectNumber);
}

void Judgement(int SleepTime,int RandNumber,int SelectNumber) {
	
	std::cout << "賽の目は " << RandNumber << " です。" << std::endl;

	if (RandNumber % 2 == SelectNumber) {
		std::cout << "あなたの、勝ちです。" << std::endl;
	}
	else {
		std::cout << "あなたの負けです。" << std::endl;
	}
}

void DiceChallenge(pFunc p, int SleepTime, int RandNumber, int SelectNumber) {
	std::cout << "賽が奇数と予想するなら「1」、偶数と予想するなら「0」を入力してください。" << std::endl;
	std::cin >> SelectNumber;

	while (SelectNumber >= 2 || SelectNumber < 0) {
		std::cout << "賽が奇数と予想するなら「1」、偶数と予想するなら「0」を入力してください。" << std::endl;
		std::cin >> SelectNumber;
	}

	if (SelectNumber == 0) {
		setTimeout(p, SleepTime, RandNumber, SelectNumber);
	}
	else if (SelectNumber == 1) {
		setTimeout(p, SleepTime, RandNumber, SelectNumber);
	}
}

int main(void) {
	std::random_device seed_gen;
	std::mt19937 engine(seed_gen());
	int randNumber = engine() % 6 + 1;
	int PLSelectNumber = 0;
	int sleepTime = 3 * 1000;
	pFunc p;
	p = Judgement;
	DiceChallenge(p, sleepTime, randNumber, PLSelectNumber);
	

	return 0;
}