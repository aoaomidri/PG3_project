#include "Rectangle.h"

void Rectangle::size(Vector2 size){
	area = size.x * size.y;
}

void Rectangle::draw(){
	std::cout << "矩形の面積は " << area << std::endl;
}
