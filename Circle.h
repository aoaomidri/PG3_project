#pragma once
#include"IShape.h"
class Circle:public IShape{
public:
	void size(Vector2 size) override;

	void draw() override;

};

