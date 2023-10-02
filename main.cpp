#include<iostream>

template <typename Type>
Type Min(Type a, Type b) {
	if (a > b) {
		return b;
	}
	else if (b > a) {
		return a;
	}
}

template<>
char Min<char>(char a, char b) {
	std::wcout << "数字以外は代入できません" << std::endl;
	return '\n';
}

int main(void) {
	int a = 8, b = 4;
	float fa = 9.4f, fb = 9.39f;
	double da = 973, db = 918;
	char ca = 'g', cb = 'n';

	std::wcout << Min(a, b) << std::endl;
	std::wcout << Min(fa, fb) << std::endl;
	std::wcout << Min(da, db) << std::endl;
	Min(ca, cb);
	return 0;
}