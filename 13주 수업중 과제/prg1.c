#include <stdio.h>

int main(void)
{
	int count = 0;
	int evenNumber = 0;
	int oddNumber = 0;

	while (1)
	{
		int number = 0;
		printf("숫자 (종료 -99): ");
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
	printf("총 : %d , 짝수 : %d , 홀수 : %d", count, evenNumber, oddNumber);
	return 0;

}

/*
	---완성---
	쉬운 과제였기 때문에 어렵지않게 해결하였습니다.
*/