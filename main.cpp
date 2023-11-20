#include<iostream>
#include<random>
#include<Windows.h>
#include<functional>

// std::function型のエイリアスを作成
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

void setTimeout(std::function<void()> p, int SleepTime) {
	std::cout << "さぁ、どうでしょうか・・・" << std::endl;
	Sleep(SleepTime);
	p();
}

std::function<int()> inputOperation() {
	int value = 0;
	return[&value]() {		
		std::cout << "賽が奇数と予想するなら「1」、偶数と予想するなら「0」を入力してください。" << std::endl;
		std::cin >> value;
		return value;
	};
}

int main(void) {
	std::random_device seed_gen;
	std::mt19937 engine(seed_gen());
	auto random = [](std::mt19937 en) {return en() % 6 + 1; };

	int randNumber = random(engine);
	int PLSelectNumber = 0;
	int sleepTime = 3 * 1000;

	std::function<void()> p;
	p = [&randNumber, &PLSelectNumber]() {Judgement(randNumber, PLSelectNumber); };

	inputFunc getInputFunction = inputOperation();

	PLSelectNumber = getInputFunction();

	while (PLSelectNumber >= 2 || PLSelectNumber < 0) {
		PLSelectNumber = getInputFunction();
	}

	if (PLSelectNumber == 0) {
		setTimeout(p, sleepTime);
	}
	else if (PLSelectNumber == 1) {
		setTimeout(p, sleepTime);
	}

	return 0;
}