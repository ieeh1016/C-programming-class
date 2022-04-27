#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) 
{
	double sum, average;

	int grade ,count;
	count = sum = 0;
	

	printf("성적 입력을 종료하려면 음수를 입력하시오\n");
	while (1) {
		printf("성적을 입력하시오: ");
		scanf("%d", &grade);
		if (grade < 0) {
			break;
		}
		else {
			sum = sum + grade;
			count++;
		}
	}
	average = sum / count;
	printf("성적의 평균은 %lf입니다.", average);

	return 0;
}
/*
	완성
	어렵지 않은 문제였기 때문에 쉽게 해결할 수 있었습니다.
	감사합니다.
*/