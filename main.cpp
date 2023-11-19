#include<iostream>
#include<random>
#include<Windows.h>
#include<functional>

// std::function型のエイリアスを作成
using stdFunc = std::function<void(int, int, int)>;

using inputFunc = std::function<int()>;


// 関数の宣言
void Judgement(int RandNumber, int SelectNumber) {
	std::cout << "賽の目は " << RandNumber << " です。" << std::endl;

	if (RandNumber % 2 == SelectNumber) {
		std::cout << "あなたの、勝ちです。" << std::endl;
	}
	else {
		std::cout << "あなたの負けです。" << std::endl;
	}
}

std::function<void(int, int, int)> setTimeout(int SleepTime, int RandNumber, int SelectNumber) {
	std::cout << "さぁ、どうでしょうか・・・" << std::endl;
	Sleep(SleepTime);

	return[RandNumber, SelectNumber](int, int, int) {
		Judgement(RandNumber, SelectNumber);
	};
}

std::function<int()> inputOperation() {
	int value = 0;
	return[&value]() {		
		std::cout << "賽が奇数と予想するなら「1」、偶数と予想するなら「0」を入力してください。" << std::endl;
		std::cin >> value;
		return value;
	};
}

void DiceChallenge(int SleepTime, int RandNumber, int SelectNumber) {
	stdFunc delayedFunction;
	inputFunc getInputFunction = inputOperation();

	SelectNumber = getInputFunction();

	while (SelectNumber >= 2 || SelectNumber < 0) {
		SelectNumber = getInputFunction();
	}

	if (SelectNumber == 0) {
		delayedFunction = setTimeout(SleepTime, RandNumber, SelectNumber);
	}
	else if (SelectNumber == 1) {
		delayedFunction = setTimeout(SleepTime, RandNumber, SelectNumber);		
	}

	delayedFunction(0, 0, 0);
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