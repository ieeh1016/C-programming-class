#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) 
{
	int i, j, n;
	printf("정수값을 입력하세요 : ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		for (j = n; j >= i; j--) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
/*
	완성
	5번 문제도 어렵지 않은 중첩반복문의 기초문제였습니다.
	감사합니다.
*/