#include <stdio.h>

int main(void)
{
	int arr[5];

	printf("5���� ���ڰ��� �Է¹޾� �ִ밪 ���ϱ�\n");
	for (int i = 0; i < 5; i++) {
		int number;
		printf("%d ��° ����: ", i + 1);
		scanf_s("%d", &number);
		arr[i] = number;
	}

	int bignumber = 0;;
	for (int i = 0; i < 5; i++) {
		if (bignumber < arr[i]) {
			bignumber = arr[i];
		}
	}
	printf("�ִ밪 : %d", bignumber);


	return 0;
}

/*
	---�ϼ�---
	����� �ʾҽ��ϴ�.
*/