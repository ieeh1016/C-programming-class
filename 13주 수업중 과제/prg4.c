#include <stdio.h>

void drawGraph(int);

int main(void)
{
	int arr[5];
	int i;
	for (i = 0; i < 5; i++) {
		int number;
		printf("%d��° ����(������)�� �Է��ϼ���: ", i + 1);
		scanf_s("%d", &number);
		arr[i] = number;
	}
	printf("\n");
	for (int i = 0; i < 5; i++) {
		printf("%d��° �Է°�: ", i + 1);
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
	---�ϼ�---
	���ݸ� �����ϸ� �ذᰡ���Ͽ����ϴ�.
*/