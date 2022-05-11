#include <stdio.h>
#include <math.h>

int bigNumber(int a, int b);

int main(void)
{
	int a, b = 0;
	int result = 0;
	printf("첫번째 정수를 입력하시오: ");
	scanf_s("%d", &a);
	printf("두번째 정수를 입력하시오: ");
	scanf_s("%d", &b);
	result=bigNumber(a, b);
	printf("1. 더 큰수는 %d입니다.\n", result);
	printf("2. %d의 제곱근(루트)은 %lf 입니다.", a, sqrt(a));

	return 0;
}

int bigNumber(int a, int b) {
	int result = 0;
	if (a > b) {
		result = a;
	}
	else {
		result = b;
	}
	return result;
}
/*
	---완성---
	201611868 현영우
	간단한 내용의 과제였기 때문에 쉽게 해결할 수 있었습니다.
*/