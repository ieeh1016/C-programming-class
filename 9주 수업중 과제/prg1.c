#include <stdio.h>

int main(void) 
{
	int i;
	
	printf("3의 배수 제외한 수(1~10)\n");
	for (i = 1; i <= 10; i++) {
		if (i % 3 == 0) {
			continue;
		}
		printf("%d ", i);
	}
	return 0;
}
/*
	완성
	쉬운문제였기때문에 빠르게 해결할 수 있었습니다.
*/