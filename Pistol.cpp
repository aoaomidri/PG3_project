#include "Pistol.h"

Pistol::Pistol(){
	name = "ピストル";
	std::cout << name << "を手に入れた" << std::endl;
}

Pistol::~Pistol(){
	std::cout << name << "は壊れてしまった・・・" << std::endl;
}

void Pistol::ViewStatus(){
	std::cout << name << "の攻撃力は 20だ。" << std::endl;
	std::cout << name << "の弾の数は 18だ。" << std::endl;
	std::cout << "\0" << std::endl;

}
