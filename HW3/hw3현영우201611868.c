#include <stdio.h>
#define MAX 1000
int main(void) {

	int first_number = 0;
	int second_number = 0;

	printf("���� 2���� �Է��ϼ���. ��� ������ �ִ밪 %d ���� ���� ������ �Է��ϼ���\n", MAX);
	printf("ù��° ���� Ű���� �Է� : ");
	scanf_s("%d", &first_number);
	printf("�ι�° ���� Ű���� �Է� : ");
	scanf_s("%d", &second_number);
	printf("**\n");
	printf("�ִ밪(%d) - ù��° ����(%d) = %d\n", MAX, first_number, MAX - first_number);
	printf("ù��° ����(%d) X �ι�° ����(%d) = %d", first_number, second_number, first_number * second_number);
	return 0;

	/*
		---�ϼ�---
		�̹� ����� ������ ������ ������ �����ϴ� �������� ������ �����߽��ϴ�.
		����������� ������ ���� ������ ���� ������ ���ϰڽ��ϴ�.
	*/
}