#include <stdio.h>

void drawDiagonal(int);

int main(void)
{
	while (1) {
		int choice = 0;
		printf("1. 짝수 홀수 확인\n");
		printf("2. 대각선 출력\n");
		printf("0. 종료\n");
		printf("선택 : ");
		scanf_s("%d", &choice);
		if (choice == 1) {
			int number = 0;
			printf("정수를 입력하세요 : ");
			scanf_s("%d", &number);
			if (number % 2 == 0) {
				printf("%d는 짝수입니다.", number);
			}
			else {
				printf("%d는 홀수입니다.", number);
			}
		}
		else if (choice == 2) {
			int number = 0;
			printf("정수를 입력하세요 : ");
			scanf_s("%d", &number);
			drawDiagonal(number);
			;
		}
		else if (choice == 0) {
			break;
		}
		else {
			printf("잘못 입력하셨습니다.");
		}
		printf("\n\n");
	}



	return 0;
}

void drawDiagonal(int a) {
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < a; j++) {
			if (j == i)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}

/*
	---완성---
	빠르게 완성하였습니다.
*/