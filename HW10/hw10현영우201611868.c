#include <stdio.h>
#include <math.h>

int bigNumber(int a, int b);

int main(void)
{
	int a, b = 0;
	int result = 0;
	printf("ù��° ������ �Է��Ͻÿ�: ");
	scanf_s("%d", &a);
	printf("�ι�° ������ �Է��Ͻÿ�: ");
	scanf_s("%d", &b);
	result=bigNumber(a, b);
	printf("1. �� ū���� %d�Դϴ�.\n", result);
	printf("2. %d�� ������(��Ʈ)�� %lf �Դϴ�.", a, sqrt(a));

	return 0;
}

int bigNumber(int a, int b) {
	int result = 0;
	if (a > b) {
		result = a;
	}
	else {
		result = b;
	}
	return result;
}
/*
	---�ϼ�---
	201611868 ������
	������ ������ �������� ������ ���� �ذ��� �� �־����ϴ�.
*/