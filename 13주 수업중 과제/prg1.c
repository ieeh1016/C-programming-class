#include <stdio.h>

int main(void)
{
	int count = 0;
	int evenNumber = 0;
	int oddNumber = 0;

	while (1)
	{
		int number = 0;
		printf("���� (���� -99): ");
		scanf_s("%d", &number);
		if (number == -99) {
			break;
		}
		else {
			if ((number % 2) == 0) {
				count++;
				evenNumber++;
			}
			else {
				count++;
				oddNumber++;
			}
		}
	}
	printf("�� : %d , ¦�� : %d , Ȧ�� : %d", count, evenNumber, oddNumber);
	return 0;

}

/*
	---�ϼ�---
	���� �������� ������ ������ʰ� �ذ��Ͽ����ϴ�.
*/