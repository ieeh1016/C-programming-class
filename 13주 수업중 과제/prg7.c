#include <stdio.h>

int main(void)
{
	int arr[5];

	printf("5개의 숫자값을 입력받아 최대값 구하기\n");
	for (int i = 0; i < 5; i++) {
		int number;
		printf("%d 번째 숫자: ", i + 1);
		scanf_s("%d", &number);
		arr[i] = number;
	}

	int bignumber = 0;;
	for (int i = 0; i < 5; i++) {
		if (bignumber < arr[i]) {
			bignumber = arr[i];
		}
	}
	printf("최대값 : %d", bignumber);


	return 0;
}

/*
	---완성---
	어렵지 않았습니다.
*/