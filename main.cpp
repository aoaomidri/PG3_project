#include<iostream>
int SalaryComparison(int n,int count,int num) {
	int BaseSalary = 1072;
	int BaseNum = 0;

	BaseNum = BaseSalary * count;

	printf("%d時間経過 : 一般 %d : 再帰 %d\n", count, BaseNum, num);

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

	printf("\n%d時間以上働く場合、再帰的な賃金体系の方が儲かる", result);

	return 0;
}