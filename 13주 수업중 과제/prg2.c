#include <stdio.h>

int main(void)
{
	int i, j;
	int number = 0;;
	printf("���� �Է� : ");
	scanf_s("%d", &number);
	for (i = number; i >= 1; i--) {
		for (j = 0; j < number - i; j++)
			printf(" ");
		for (j = 0; j <= i - 1; j++)
			printf("*");
		printf("\n");
	}
	return 0;
}

/*
	---�ϼ�---
	������ �ذ��� �� �־����ϴ�.
*/