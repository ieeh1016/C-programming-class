#include <stdio.h>

int main(void) 
{
	int a, b, c;
	for (a = 1; a <= 20; a++) {
		for (b = 1; b <= 20; b++) {
			for (c = 1; c <= 20; c++) {
				if (a * a + b * b == c * c) {
					printf("%d %d %d\n", a, b, c);
				}
			}
		}
	}

	return 0;
}
/*
	완성
	어렵지 않은 중첩 반복문이기떄문에 쉽게 해결하였습니다.
	감사합니다.
*/