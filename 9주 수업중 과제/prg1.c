#include <stdio.h>

int main(void) 
{
	int i;
	
	printf("3�� ��� ������ ��(1~10)\n");
	for (i = 1; i <= 10; i++) {
		if (i % 3 == 0) {
			continue;
		}
		printf("%d ", i);
	}
	return 0;
}
/*
	�ϼ�
	��������⶧���� ������ �ذ��� �� �־����ϴ�.
*/