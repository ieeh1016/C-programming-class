#include <stdio.h>

int main(void) 
{
	int number = 0;
	int count1 = 0;
	int count2 = 0;
	int count3 = 0;

	printf("0~29������ ������ �Է� �޾� 10������ ������ ����,������ŭ *�� ǥ��\n�Է� ����(0~29���� �̿��� ����)\n");
	while (1) {
		printf("�� : ");
		scanf_s("%d", &number);
		if (number >= 0 && number <= 9) {
			count1++;
		}
		else if (number >= 10 && number <= 19) {
			count2++;
		}
		else if (number >= 20 && number <= 29) {
			count3++;
		}
		else {
			break;
		}
	}
	printf("0 - 9 : ");
	for (int i = 0; i < count1; i++) {
		printf("*");
	}
	printf("\n10 - 19 : ");
	for (int j = 0; j < count2; j++) {
		printf("*");
	}
	printf("\n20 - 29 : ");
	for (int k = 0; k < count3; k++) {
		printf("*");
	}

	

	return 0;

}
/*
	---�ϼ�---
	������ �ݺ��� �������� ������ ���� ������ �ذ��� �� �־����ϴ�.
	�����ð��� ����� ������ �� Ȱ���߱� �����ΰͰ����ϴ�.
	������������ ������ �ϰڽ��ϴ�. �����մϴ�.
*/