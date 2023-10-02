#include<iostream>
int SalaryComparison(int n,int count,int num) {
	int BaseSalary = 1072;
	int BaseNum = 0;

	BaseNum = BaseSalary * count;

	if (BaseNum < num){
		return count;
	}
	else {
		num += n * 2 - 50;

		return SalaryComparison(n * 2 - 50, count + 1, num);
	}
	
}

int main(void) {
	int firstSalary = 100;
	int count = 1;
	int num = 100;
	int result = 0;

	result = SalaryComparison(firstSalary, count, num);

	printf("%d", result);

	return 0;
}