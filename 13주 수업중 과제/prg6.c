#include <stdio.h>

void drawDiagonal(int);

int main(void)
{
	while (1) {
		int choice = 0;
		printf("1. ¦�� Ȧ�� Ȯ��\n");
		printf("2. �밢�� ���\n");
		printf("0. ����\n");
		printf("���� : ");
		scanf_s("%d", &choice);
		if (choice == 1) {
			int number = 0;
			printf("������ �Է��ϼ��� : ");
			scanf_s("%d", &number);
			if (number % 2 == 0) {
				printf("%d�� ¦���Դϴ�.", number);
			}
			else {
				printf("%d�� Ȧ���Դϴ�.", number);
			}
		}
		else if (choice == 2) {
			int number = 0;
			printf("������ �Է��ϼ��� : ");
			scanf_s("%d", &number);
			drawDiagonal(number);
			;
		}
		else if (choice == 0) {
			break;
		}
		else {
			printf("�߸� �Է��ϼ̽��ϴ�.");
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
	---�ϼ�---
	������ �ϼ��Ͽ����ϴ�.
*/