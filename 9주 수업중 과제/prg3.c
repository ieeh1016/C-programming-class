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
	�ϼ�
	����� ���� ��ø �ݺ����̱⋚���� ���� �ذ��Ͽ����ϴ�.
	�����մϴ�.
*/