#include <stdio.h>

int get_sum(int no1[]);

int main(void)
{
	int no1[3] = { 9,7,15 };
	int no2[5] = { 10,20,30,40,50 };

	int sum;
	sum = get_sum(no1, 3);
	printf("no1 �迭 ���� �հ�=%d\n", sum);
	sum = get_sum(no2, 5);
	printf("no2 �迭 ���� �հ�=%d\n", sum);
	return 0;
}

int get_sum(int no1[], int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum = sum + no1[i];
	}
	return sum;
}

/*
	---�ϼ�---
	���� ���������ϴ�.
*/