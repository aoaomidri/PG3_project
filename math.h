#pragma once
#include<iostream>
#include<Windows.h>

template <typename T1, typename T2>
class math{
public:

	//�����o�ϐ�
	T1 a;
	T2 b;

	//�R���X�g���N�^
	math(T1 a, T2 b) :a(a), b(b) {};

	//�����o�֐�
	T1 Min() {
		if (a > b) {
			return static_cast<T1>(b);
		}
		else if (b > a) {
			return a;
		}
	}

};

