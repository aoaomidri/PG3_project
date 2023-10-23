#pragma once
#include<iostream>

struct Vector2 {
	float x, y;
};

class IShape{
public:
	IShape();
	//面積を求める関数
	virtual void size(Vector2 size) = 0;
	//面積を表示させる
	virtual void draw() = 0;

protected:
	float area;
};

