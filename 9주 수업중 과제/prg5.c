#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) 
{
	int i, j, n;
	printf("�������� �Է��ϼ��� : ");
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
	�ϼ�
	5�� ������ ����� ���� ��ø�ݺ����� ���ʹ��������ϴ�.
	�����մϴ�.
*/