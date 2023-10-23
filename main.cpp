#include"Circle.h"
#include"Rectangle.h"
int main(void) {
	IShape* ishape_[2]{};
	Vector2 size_ = { 2.0f,3.0f };

	ishape_[0] = new Circle;
	ishape_[1] = new Rectangle;

	for (int i = 0; i < 2; i++){
		ishape_[i]->size(size_);
	}

	for (int i = 0; i < 2; i++){
		ishape_[i]->draw();
	}

	return 0;
}