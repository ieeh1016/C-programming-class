#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) 
{
	int i, j, n;
	printf("�������� �Է��ϼ��� : ");
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
	�ϼ�
	�̹��� ���� ����� ���� ��ø �ݺ��� ���������ϴ�.
	���� �ذ��Ͽ����ϴ�. �����մϴ�.
*/