#include <stdio.h>

int main(void) 
{
	int number = 0;
	

	while (1) {
		int sum_step = 0; //최종합계 정수값에 도달하기 전까지의 합
		int sum_final = 0; //최종합계 정수값
		printf("[입력] 1~100사이의 정수값 중 짝수값을 입력하세요 : "); 
		scanf_s("%d", &number);
		if (number >= 0 && number<=100) {  
			if (number % 2 != 0) {
				printf("짝수값만 입력해야 합니다. 다시 입력하세요.\n\n"); //입력한 정수값이 0~100 사이 이지만 짝수가 아닐떄는 다시 입력하라는 문구를 출력한다.
				continue;
			}
			else {
				for (int i = 1; i <= number; i++) { //입력한 정수값이 0~100 사이이고 짝수 일때 문제에 나온 식처럼 합계를 구한다. 
					sum_step = sum_step + i;
					sum_final = sum_final + sum_step;
				}
				printf("[결과] %d\n\n", sum_final);
				continue;
			}
		}
		else {
			printf("프로그램을 종료합니다.\n"); //입력한 정수값이 0~100 사이가 아니면 프로그램을 종료한다
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

