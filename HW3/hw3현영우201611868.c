#include <stdio.h>
#define MAX 1000
int main(void) {

	int first_number = 0;
	int second_number = 0;

	printf("정수 2개를 입력하세요. 모든 정수는 최대값 %d 보다 작은 값으로 입력하세요\n", MAX);
	printf("첫번째 정수 키보드 입력 : ");
	scanf_s("%d", &first_number);
	printf("두번째 정수 키보드 입력 : ");
	scanf_s("%d", &second_number);
	printf("**\n");
	printf("최대값(%d) - 첫번째 정수(%d) = %d\n", MAX, first_number, MAX - first_number);
	printf("첫번째 정수(%d) X 두번째 정수(%d) = %d", first_number, second_number, first_number * second_number);
	return 0;

	/*
		---완성---
		이미 배웠던 내용을 가볍게 내용을 복습하는 느낌으로 과제를 수행했습니다.
		어려웠던점은 없었고 남은 과제와 수업 열심히 임하겠습니다.
	*/
}