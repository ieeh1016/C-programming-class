#include <stdio.h>

int main(void)
{
	int i, j, sum;
	int data[3][5] = {
		{12,56,32,16,98},
		{99,56,34,41,3},
		{65,3,87,78,21}
	};
	printf("<�ະ �հ�>\n");
	for (i = 0; i < 3; i++) {
		sum = 0;
		for (j = 0; j < 5; j++) {
			sum = sum + data[i][j];
		}
		printf("%d���� �հ�: %d\n", i, sum);
	}
	printf("\n<���� �հ�>\n");
	for (i = 0; i < 5; i++) {
		sum = 0;
		for (j = 0; j < 3; j++) {
			sum = sum + data[j][i];
		}
		printf("%d���� �հ�: %d\n", i, sum);
	}

	return 0;

}
/*
	---�ϼ�---
	���� �ذ��Ͽ����ϴ�.
*/
