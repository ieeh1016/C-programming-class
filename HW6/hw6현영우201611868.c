#include <stdio.h>
#include <math.h>

int main(void) {

	int num1, num2, num3, num4; //입력받을 각각의 정수값을 선언
	int big_count = 0;          //100이상의 숫자를 셀때 쓰는 변수 선언
	int small_count = 0;        //0이상 100미만의 숫자를 셀때 쓰는 변수 선언
	int negativenum_sum = 0;    //음수의 합계 변수 선언
	int negativenum_count = 0;  //음수의 개수를 셀때 쓰는 변수 선언
	int sum = 0;                //음수값을 제외한 입력된 모든 숫자의 합계 변수 선언
	float avg = 0;              //음수값을 제외한 입력된 모든 숫자의 평균 변수 선언

	printf("첫번쨰 정수값을 입력하시오 :");
	scanf_s("%d", &num1);
	printf("두번쨰 정수값을 입력하시오 :");
	scanf_s("%d", &num2);
	printf("세번쨰 정수값을 입력하시오 :");
	scanf_s("%d", &num3);
	printf("네번쨰 정수값을 입력하시오 :");  //4개의 변수에 각각의 정수값을 입력받음
	scanf_s("%d", &num4);


	if (num1 >= 100) {  //입력한 각 정수값들이 100보다 크면 big_count변수에 +1값을 해주고
		big_count++;
	}
	else if(num1>=0 && num1<100){  //입력한 각 정수값들이 0이상 100미만이면 small_count변수에 +1값을 해준다.
		small_count++;
	}

	if (num2 >= 100) {
		big_count++;
	}
	else if (num2 >= 0 && num2 < 100) {
		small_count++;
	}

	if (num3 >= 100) {
		big_count++;
	}
	else if (num3 >= 0 && num3 < 100) {
		small_count++;
	}

	if (num4 >= 100) {
		big_count++;
	}
	else if (num4 >= 0 && num4 < 100) {
		small_count++;
	}

	printf("\n1. 큰 수(100 이상의 숫자) 개수 : %d, 작은 수(0 이상 100 미만의 숫자) 개수 : %d\n\n", big_count, small_count);

	if (big_count > small_count) {  //큰 수 개수가 저장된 big_count와 작은 수 개수가 저장된 small_count를 비교 하여 해당된 결과에 따라 다른 결과값 출력
		printf("2. 큰 수 개수가 작은 수 개수보다 %d개 더 많다.\n\n", big_count - small_count);
	}
	else if (small_count > big_count) {
		printf("2. 작은 수 개수가 큰 수 개수보다 %d개 더 많다.\n\n", small_count - big_count);
	}
	else if (small_count == big_count) {
		printf("2. 큰 수 개수와 작은 수 개수는 같다.\n\n");
	}

	if (num1 >= 0) {  //입력한 정수값이 음수가 아니면 음수값을 제외한 입력된 모든 숫자의 합계 변수인 sum에 더하여줌
		sum = sum + num1;
	}
	else {
		negativenum_sum = negativenum_sum + num1; //만약 입력한 정수값이 음수이면 음수의 합계 변수인 negativenum_sum에 더하여줌
		negativenum_count++; //입력한 정수값이 음수일때 음수의 개수를 셀때 쓰는 변수인 negativenum_count에 +1을함
	}

	if (num2 >= 0) {
		sum = sum + num2;
	}
	else {
		negativenum_sum = negativenum_sum + num2;
		negativenum_count++;
	}

	if (num3 >= 0) {
		sum = sum + num3;
	}
	else {
		negativenum_sum = negativenum_sum + num3;
		negativenum_count++;
	}

	if (num4 >= 0) {
		sum = sum + num4;
	}
	else {
		negativenum_sum = negativenum_sum + num4;
		negativenum_count++;
	}

	avg = (double)sum / (4-negativenum_count); //음수값을 제외한 입력된 모든 숫자의 합계에서 입력한 4개의 정수중 음수를 제외한개수를 나누어 음수값을 제외한 입력된 모든 숫자의 평균을 구함

	printf("3. 음수값을 제외한 입력된 모든 숫자 통계\n");
	
	if (negativenum_count == 4) { //입력된 모든수가 음수라면 해당 내용을 출력
		printf("입력된 모든 숫자가 음수값이어서 결과가 없습니다.\n\n");
	}
	else { //입력된 모든수가 음수가 아닌값이 있으면 해당 내용을 출력
		printf("1) 음수값을 제외한 입력된 모든 숫자의 합계 : %d\n", sum);
		printf("2) 음수값을 제외한 입력된 모든 숫자으 평균 : %f\n\n", avg);
	}

	printf("4. 음수값으로 입력된 숫자 통계\n");  //음수값으로 입력된 숫자의 개수에 따라서 합을 구함
	if (negativenum_count == 0) {
		printf("입력된 모든 숫자가 0이상의 값이어서 결과가 없습니다.");
	}
	else {
		printf("음수값으로 입력된 모든 숫자의 합계 : %d", negativenum_sum);
	}

	return 0;
}

/*
	---완성---
	생각보다 문제내용에서 조건이 들어가는 경우가 많아서 코드의 길이가 늘어났습니다.
	반복문을 쓰지않고 하다보니 코드의 길이가 길어져 지저분했습니다.
	생각보다 어렵지 않게 과제는 마무리 할 수 있었습니다.
	남은 과제 최선을 다해서 마무리하겠습니다. 감사합니다.
*/