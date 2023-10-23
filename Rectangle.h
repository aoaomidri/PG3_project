#pragma once
#include"IShape.h"

class Rectangle:public IShape{
public:
	void size(Vector2 size) override;

	void draw() override;

};

