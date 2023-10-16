#include"math.h"
template<typename T>
void makeComment(T message) {
	std::cout << message << std::endl;
}
int main(void) {
	int numI = 17;
	float numF = 15.2f;
	double numD = 9.2;

	math<int, double>   pair1(numI, numD);
	math<int, float>    pair2(numI, numF);
	math<float, int>    pair3(numF, numI);
	math<float, double> pair4(numF, numD);
	math<double,int>	pair5(numD, numI);
	math<double, float> pair6(numD, numF);

	makeComment(pair1.Min());
	makeComment(pair2.Min());
	makeComment(pair3.Min());
	makeComment(pair4.Min());
	makeComment(pair5.Min());
	makeComment(pair6.Min());

	return 0;
}

