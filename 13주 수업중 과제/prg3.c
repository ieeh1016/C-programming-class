#include <stdio.h>

int chkEvenOdd(int a);
void drawGraph();

int main(void)
{
	int number = 0;
	int check = 0;
	int evenNumber = 0;
	int oddNumber = 0;
	while (1)
	{
		int number = 0;
		printf("숫자 : ");
		scanf_s("%d", &number);
		if (number == -99) {
			break;
		}
		else {
			check = chkEvenOdd(number);
			if (check == 0) {
				evenNumber++;
			}
			else {
				oddNumber++;
			}
		}
	}
	drawGraph(evenNumber, oddNumber);
	return 0;
}

int chkEvenOdd(int a) {
	int result;
	if ((a % 2) == 0) {
		result = 0;
	}
	else {
		result = 1;
	}
	return result;
}

void drawGraph(int a, int b) {
	printf("짝수 : ");
	for (int i = 0; i < a; i++) {
		printf("*");
	}
	printf("\n홀수 : ");
	for (int i = 0; i < b; i++) {
		printf("*");
	}
}

/*
	---완성---
	어렵지 않게 해결하였습니다.
*/