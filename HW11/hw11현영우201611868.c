#include <stdio.h>

void bigNumber(void);

int main(void)
{
	int array[4][3];
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			int score = 0;
			printf("학생 %d의 %d번째 시험 성적: ",i+1,j+1);
			scanf_s("%d", &score);
			array[i][j] = score;
		}
	}
	
	printf("\n<시험별 통계>\n");
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
		printf("%d번째 시험을 치룬 모든 학생들 중 최고점수=%d\n", k + 1, bigNumber);
		printf("%d번째 시험을 치룬 모든 학생에 대한 평균점수=%lf\n\n", k + 1, avg);
	}
	printf("\n<학생별 통계>\n");
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
		printf("%d번째 학생의 최고점수=%d\n", k + 1, bigNumber);
		printf("%d번째 학생의 평균점수=%lf\n\n", k + 1, avg);
	}
	return 0;
}

/*
	---완성---
	201611868 현영우
	간단한 배열을 통해 해결하는 과제였기 때문에 쉽게 해결하였습니다.
*/