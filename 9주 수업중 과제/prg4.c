#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) 
{
	int i, j, n;
	printf("정수값을 입력하세요 : ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			printf("%d ", j);
		}
		printf("\n");
	}

	return 0;
}
/*
	완성
	이문제 역시 어렵지 않은 중첩 반복문 문제였습니다.
	쉽게 해결하였습니다. 감사합니다.
*/