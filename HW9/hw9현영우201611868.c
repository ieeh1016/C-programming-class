#include <stdio.h>

int main(void) 
{
	int number = 0;
	

	while (1) {
		int sum_step = 0;
		int sum_final = 0;
		printf("[�Է�] 1~100������ ������ �� ¦������ �Է��ϼ��� : ");
		scanf_s("%d", &number);
		if (number >= 0 && number<=100) {
			if (number % 2 != 0) {
				printf("¦������ �Է��ؾ� �մϴ�. �ٽ� �Է��ϼ���.\n\n");
				continue;
			}
			else {
				for (int i = 1; i <= number; i++) {
					sum_step = sum_step + i;
					sum_final = sum_final + sum_step;
				}
				printf("[���] %d\n\n", sum_final);
				continue;
			}
		}
		else {
			printf("���α׷��� �����մϴ�.\n");
			break;
		}
	}
	

	return 0;

}
/*
	---�ϼ�---
	���ǹ��� �ݺ����� �� �����Ͽ��� ������ ������ �Ͽ����ϴ�.
	���������� ����� ���� �����̱� ������ �����ð��� ��� ���븸 ������ ������ �ذ��� �� �־����ϴ�.
	���� ������ �ּ��� ���ؼ� ������ �ϰڽ��ϴ�.
*/

