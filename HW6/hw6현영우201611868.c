#include <stdio.h>
#include <math.h>

int main(void) {

	int num1, num2, num3, num4; //�Է¹��� ������ �������� ����
	int big_count = 0;          //100�̻��� ���ڸ� ���� ���� ���� ����
	int small_count = 0;        //0�̻� 100�̸��� ���ڸ� ���� ���� ���� ����
	int negativenum_sum = 0;    //������ �հ� ���� ����
	int negativenum_count = 0;  //������ ������ ���� ���� ���� ����
	int sum = 0;                //�������� ������ �Էµ� ��� ������ �հ� ���� ����
	float avg = 0;              //�������� ������ �Էµ� ��� ������ ��� ���� ����

	printf("ù���� �������� �Է��Ͻÿ� :");
	scanf_s("%d", &num1);
	printf("�ι��� �������� �Է��Ͻÿ� :");
	scanf_s("%d", &num2);
	printf("������ �������� �Է��Ͻÿ� :");
	scanf_s("%d", &num3);
	printf("�׹��� �������� �Է��Ͻÿ� :");  //4���� ������ ������ �������� �Է¹���
	scanf_s("%d", &num4);


	if (num1 >= 100) {  //�Է��� �� ���������� 100���� ũ�� big_count������ +1���� ���ְ�
		big_count++;
	}
	else if(num1>=0 && num1<100){  //�Է��� �� ���������� 0�̻� 100�̸��̸� small_count������ +1���� ���ش�.
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

	printf("\n1. ū ��(100 �̻��� ����) ���� : %d, ���� ��(0 �̻� 100 �̸��� ����) ���� : %d\n\n", big_count, small_count);

	if (big_count > small_count) {  //ū �� ������ ����� big_count�� ���� �� ������ ����� small_count�� �� �Ͽ� �ش�� ����� ���� �ٸ� ����� ���
		printf("2. ū �� ������ ���� �� �������� %d�� �� ����.\n\n", big_count - small_count);
	}
	else if (small_count > big_count) {
		printf("2. ���� �� ������ ū �� �������� %d�� �� ����.\n\n", small_count - big_count);
	}
	else if (small_count == big_count) {
		printf("2. ū �� ������ ���� �� ������ ����.\n\n");
	}

	if (num1 >= 0) {  //�Է��� �������� ������ �ƴϸ� �������� ������ �Էµ� ��� ������ �հ� ������ sum�� ���Ͽ���
		sum = sum + num1;
	}
	else {
		negativenum_sum = negativenum_sum + num1; //���� �Է��� �������� �����̸� ������ �հ� ������ negativenum_sum�� ���Ͽ���
		negativenum_count++; //�Է��� �������� �����϶� ������ ������ ���� ���� ������ negativenum_count�� +1����
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

	avg = (double)sum / (4-negativenum_count); //�������� ������ �Էµ� ��� ������ �հ迡�� �Է��� 4���� ������ ������ �����Ѱ����� ������ �������� ������ �Էµ� ��� ������ ����� ����

	printf("3. �������� ������ �Էµ� ��� ���� ���\n");
	
	if (negativenum_count == 4) { //�Էµ� ������ ������� �ش� ������ ���
		printf("�Էµ� ��� ���ڰ� �������̾ ����� �����ϴ�.\n\n");
	}
	else { //�Էµ� ������ ������ �ƴѰ��� ������ �ش� ������ ���
		printf("1) �������� ������ �Էµ� ��� ������ �հ� : %d\n", sum);
		printf("2) �������� ������ �Էµ� ��� ������ ��� : %f\n\n", avg);
	}

	printf("4. ���������� �Էµ� ���� ���\n");  //���������� �Էµ� ������ ������ ���� ���� ����
	if (negativenum_count == 0) {
		printf("�Էµ� ��� ���ڰ� 0�̻��� ���̾ ����� �����ϴ�.");
	}
	else {
		printf("���������� �Էµ� ��� ������ �հ� : %d", negativenum_sum);
	}

	return 0;
}

/*
	---�ϼ�---
	�������� �������뿡�� ������ ���� ��찡 ���Ƽ� �ڵ��� ���̰� �þ���ϴ�.
	�ݺ����� �����ʰ� �ϴٺ��� �ڵ��� ���̰� ����� �������߽��ϴ�.
	�������� ����� �ʰ� ������ ������ �� �� �־����ϴ�.
	���� ���� �ּ��� ���ؼ� �������ϰڽ��ϴ�. �����մϴ�.
*/