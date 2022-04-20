#include <stdio.h>

int main(void)
{
	int check = 1;
	int number = 0; //입력받을 정수
	int count1 = 0; //0~9 의 숫자를 카운트하는 변수
	int count2 = 0; //10~19 의 숫자를 카운트하는 변수
	int count3 = 0; //20~29 의 숫자를 카운트하는 변수

	printf("0~29사이의 정수를 입력 받아 10단위로 개수를 세고,개수만큼 *로 표현\n입력 종료(0~29사이 이외의 정수)\n");
	while (check > 0) {
		printf("수 : ");
		scanf_s("%d", &number);
		if (number >= 0 && number <= 9) {    //0~9 or 10~19 or 20~29 일떄를 확인하여 각각의 변수를 +1 시킴
			count1++;
		}
		else if (number >= 10 && number <= 19) {
			count2++;
		}
		else if (number >= 20 && number <= 29) {
			count3++;
		}
		else {
			check = 0;
		}
	}
	printf("0 - 9 : ");
	for (int i = 0; i < count1; i++) {  // 카운트 되었던 변수만큼 *를 출력시킴
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
	---완성---
	간단한 반복문 예제였기 때문에 쉽게 과제를 해결할 수 있었습니다.
	수업시간에 배웠던 내용을 잘 활용했기 때문인것같습니다.
	다음과제까지 열심히 하겠습니다. 감사합니다.
*/