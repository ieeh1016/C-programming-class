#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) 
{
	double sum, average;

	int grade ,count;
	count = sum = 0;
	

	printf("���� �Է��� �����Ϸ��� ������ �Է��Ͻÿ�\n");
	while (1) {
		printf("������ �Է��Ͻÿ�: ");
		scanf("%d", &grade);
		if (grade < 0) {
			break;
		}
		else {
			sum = sum + grade;
			count++;
		}
	}
	average = sum / count;
	printf("������ ����� %lf�Դϴ�.", average);

	return 0;
}
/*
	�ϼ�
	����� ���� �������� ������ ���� �ذ��� �� �־����ϴ�.
	�����մϴ�.
*/