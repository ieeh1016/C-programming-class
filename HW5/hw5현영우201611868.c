#include <stdio.h>
#include <math.h>

int main(void) {
	
	char ch;
	float number;

	printf("입력1) 알파벳 1글자를 키보드로 입력하세요 : ");
	scanf_s("%c", &ch);
	printf("입력2) 소수점이 있는 0보다 큰 숫자를 키보드로 입력하세요 : ");
	scanf_s("%f", &number);

	printf("\n출력1) 입력받은 알파벳=%c, 입력받은 알파벳의 다음 알파벳=%c\n", ch, ch + 1);
	printf("출력2) 소수점을 버린 값=%d, 반올림한 값=%d", (int)floor(number), (int)round(number));
	
	return 0;

	/*
		--완성--
		기초적인 내용이기 때문에 어렵지않게 과제를 마무리할수있었습니다.
		모르는 부분은 교재와 인터넷을 참고하여 하고 있습니다.
		수업에 더 열심히 참여하겠습니다. 감사합니다.
	*/
}