#include <stdio.h>

int main(void)
{
	int check = 1;
	int number = 0; //�Է¹��� ����
	int count1 = 0; //0~9 �� ���ڸ� ī��Ʈ�ϴ� ����
	int count2 = 0; //10~19 �� ���ڸ� ī��Ʈ�ϴ� ����
	int count3 = 0; //20~29 �� ���ڸ� ī��Ʈ�ϴ� ����

	printf("0~29������ ������ �Է� �޾� 10������ ������ ����,������ŭ *�� ǥ��\n�Է� ����(0~29���� �̿��� ����)\n");
	while (check > 0) {
		printf("�� : ");
		scanf_s("%d", &number);
		if (number >= 0 && number <= 9) {    //0~9 or 10~19 or 20~29 �ϋ��� Ȯ���Ͽ� ������ ������ +1 ��Ŵ
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
	for (int i = 0; i < count1; i++) {  // ī��Ʈ �Ǿ��� ������ŭ *�� ��½�Ŵ
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
	---�ϼ�---
	������ �ݺ��� �������� ������ ���� ������ �ذ��� �� �־����ϴ�.
	�����ð��� ����� ������ �� Ȱ���߱� �����ΰͰ����ϴ�.
	������������ ������ �ϰڽ��ϴ�. �����մϴ�.
*/