#include "Sword.h"

Sword::Sword(){
	name = "錆びた剣";
	std::cout << name << "を手に入れた" << std::endl;
}

Sword::~Sword(){
	std::cout << name << "は壊れてしまった・・・" << std::endl;
}

void Sword::ViewStatus(){
	std::cout << name << "の攻撃力は 8だ。" << std::endl;
	std::cout << name << "の耐久力は 10だ。" << std::endl;
	std::cout << "\0" << std::endl;

}
