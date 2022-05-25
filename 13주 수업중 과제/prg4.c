#include <stdio.h>

void drawGraph(int);

int main(void)
{
	int arr[5];
	int i;
	for (i = 0; i < 5; i++) {
		int number;
		printf("%d번째 숫자(정수값)를 입력하세요: ", i + 1);
		scanf_s("%d", &number);
		arr[i] = number;
	}
	printf("\n");
	for (int i = 0; i < 5; i++) {
		printf("%d번째 입력값: ", i + 1);
		drawGraph(arr[i]);
		printf("\n");
	}
	return 0;
}

void drawGraph(int a) {
	for (int j = 0; j < a; j++) {
		printf("*");
	}
}

/*
	---완성---
	조금만 생각하면 해결가능하였습니다.
*/