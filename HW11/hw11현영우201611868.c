#include <stdio.h>

void bigNumber(void);

int main(void)
{
	int array[4][3];
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			int score = 0;
			printf("�л� %d�� %d��° ���� ����: ",i+1,j+1);
			scanf_s("%d", &score);
			array[i][j] = score;
		}
	}
	
	printf("\n<���躰 ���>\n");
	for (int k = 0; k < 3; k++) {
		int bigNumber = 0;
		double sum = 0;
		double avg = 0;
		for (int i = 0; i < 4; i++) {
			if (bigNumber < array[i][k]) {
				bigNumber = array[i][k];
			}
			sum = sum + array[i][k];
			avg = sum / 4;
		}
		printf("%d��° ������ ġ�� ��� �л��� �� �ְ�����=%d\n", k + 1, bigNumber);
		printf("%d��° ������ ġ�� ��� �л��� ���� �������=%lf\n\n", k + 1, avg);
	}
	printf("\n<�л��� ���>\n");
	for (int k = 0; k < 4; k++) {
		int bigNumber = 0;
		double sum = 0;
		double avg = 0;
		for (int i = 0; i < 3; i++) {
			if (bigNumber < array[k][i]) {
				bigNumber = array[k][i];
			}
			sum = sum + array[k][i];
			avg = sum / 3;
		}
		printf("%d��° �л��� �ְ�����=%d\n", k + 1, bigNumber);
		printf("%d��° �л��� �������=%lf\n\n", k + 1, avg);
	}
	return 0;
}

/*
	---�ϼ�---
	201611868 ������
	������ �迭�� ���� �ذ��ϴ� �������� ������ ���� �ذ��Ͽ����ϴ�.
*/