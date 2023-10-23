#include "Circle.h"
#include<numbers>

void Circle::size(Vector2 size){
	area = static_cast<float>(pow(size.x, 2) * std::numbers::pi_v<float>);
}

void Circle::draw(){
	std::cout << "円の面積は " << area << std::endl;
}
