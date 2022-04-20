#include <stdio.h>

int main(void) 
{
	int number = 0;
	

	while (1) {
		int sum_step = 0;
		int sum_final = 0;
		printf("[입력] 1~100사이의 정수값 중 짝수값을 입력하세요 : ");
		scanf_s("%d", &number);
		if (number >= 0 && number<=100) {
			if (number % 2 != 0) {
				printf("짝수값만 입력해야 합니다. 다시 입력하세요.\n\n");
				continue;
			}
			else {
				for (int i = 1; i <= number; i++) {
					sum_step = sum_step + i;
					sum_final = sum_final + sum_step;
				}
				printf("[결과] %d\n\n", sum_final);
				continue;
			}
		}
		else {
			printf("프로그램을 종료합니다.\n");
			break;
		}
	}
	

	return 0;

}
/*
	---완성---
	조건문과 반복문을 잘 조합하여서 과제를 마무리 하였습니다.
	아직까지는 어렵지 않은 과제이기 때문에 수업시간에 배운 내용만 가지고 문제를 해결할 수 있었습니다.
	남은 수업도 최선을 다해서 마무리 하겠습니다.
*/

