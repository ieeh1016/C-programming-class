#include <stdio.h>
    
int main() {
    
    const int dollar = 1116;  //��ȣ����� ���� �� ȭ�� �ݾ��� ����
    const int yen = 10;
    const int yuan = 170;
    const int euro = 1326;

    const double child = 1;  //��ȣ����� ���� �� ���̺� �������� ����
    const double youth = 0.2;
    const double adult = 0;
    const double old = 0.5;

    int price = 0; //�Է��� ���
    int age = 0; //����
    int nation = 0; //����
    int balance = 0; //���� ī�� �ܾ�

    double change_price = 0; //�������� ����� ��ȭ����
    double korea_payment = 0;  //������ ��ȭ �ݾ�
    double payment = 0; //�ش� ������ ȭ��� �ٲ� ���� �ݾ�
    double korea_balance = 0; //�����ϰ� ���� ��ȭ�� �ܾ�
    double nation_balance = 0; //�ش� ������ ȭ��� �����ϰ� ���� �ܾ�

    printf("0. ����� �Է��ϼ���(������ �����, �ѱ� ��ȭ) : ");
    scanf_s("%d", &price);
    printf("1. ���̸� �Է��ϼ���(������ �����) : ");
    scanf_s("%d", &age);

    if (age >= 0 && 6 >= age) { //���̺��� ���εǴ� ����� �ٸ��� �Ͽ� ����
        change_price = (double)price - ((double)price * child);
        printf("\n\n\n����ž���Դϴ�.  ��ſ� ���� �Ǽ���.");
    }
    else if (age >= 7 && 18 >= age) {
        change_price = (double)price - ((double)price * youth);
    }
    else if (age >= 19 && 64 >= age) {
        change_price = (double)price - ((double)price * adult);
    }
    else {
        change_price = (double)price - ((double)price * old);
    }

  
    if (change_price != 0) { // ���εȿ���� 0���� �ƴϸ� �ش� ���ǹ� ����
        printf("2. ����� ȭ�� ������ �Է��ϼ��� (�̱��� 1, �Ϻ��� 2, �߱��� 3, ������ 4, �������� 5, �ѱ��� �� �̿� ���� �Է�) : ");
        scanf_s("%d", &nation);
        switch (nation) { //�Էµ� ������ case���� �ٸ� ���Ǽ���
        case 1:
            korea_payment = change_price; //������ ��ȭ�� ���ε� ������� ����
            printf("3. ���� ī�� �ܾ��� �Է��ϼ���(������ �����, �޷�ȭ) : ");
            scanf_s("%d", &balance);
            payment = change_price / dollar; //����� ȭ�� �̱��Ͻ� ���ε� ��ȭ�ݾ׿� dollar�� ������ �ش� ȭ�� �ݾ��� ����
            printf("\n\n���� �ݾ��� %lf ��(%lf �޷�)�Դϴ�.", korea_payment, payment);
            if (balance >= payment) { //�ܾ��� ũ�Ⱑ ������ �ݾ��� ũ�⺸�� ũ�ų� ������ ���ǽ���
                korea_balance = (double)balance * dollar - change_price; //��ȭ�ܾ��� �ش籹��ȭ��ݾ׿��� �ش籹���� ȭ������� ���Ѱ��� �����ؾ��� ���αݾ��� �������� ����
                nation_balance = (double)balance - payment; //�ش籹�� ȭ����� �ܾ��� �Է��� �ش籹���ܾ׿��� ������ �ش�ȭ��ݾ��� �������� ����
                printf("\n��~������ �Ϸ�Ǿ����ϴ�. ���� �ܾ��� %lf ��(%lf �޷�)�Դϴ�. ��ſ� ���� �Ǽ���.", korea_balance, nation_balance); //��ȣ�ν��� �ܾװ� �ش�ȭ��ν��� �ܾ��� ���� ���
                break;
            }
            else {
                printf("\n�ߺ�~�ܾ��� �����մϴ�."); //�ܾ��� ũ�Ⱑ ������ �ݾ��� ũ�⺸�� ������ ���ǽ��� 
                break;
            }
        case 2:
            korea_payment = change_price;
            printf("3. ���� ī�� �ܾ��� �Է��ϼ���(������ �����, ��ȭ) : ");
            scanf_s("%d", &balance);
            payment = change_price / yen;
            printf("\n\n���� �ݾ��� %lf ��(%lf ��ȭ)�Դϴ�.", korea_payment, payment);
            if (balance >= payment) {
                korea_balance = (double)balance * yen - change_price;
                nation_balance = (double)balance - payment;
                printf("\n��~������ �Ϸ�Ǿ����ϴ�. ���� �ܾ��� %lf ��(%lf ��ȭ)�Դϴ�. ��ſ� ���� �Ǽ���.", korea_balance, nation_balance);
                break;
            }
            else {
                printf("\n�ߺ�~�ܾ��� �����մϴ�.");
                break;
            }
        case 3:
            korea_payment = change_price;
            printf("3. ���� ī�� �ܾ��� �Է��ϼ���(������ �����, ����ȭ) : ");
            scanf_s("%d", &balance);
            payment = change_price / yuan;
            printf("\n\n���� �ݾ��� %lf ��(%lf ����ȭ)�Դϴ�.", korea_payment, payment);
            if (balance >= payment) {
                korea_balance = (double)balance * yuan - change_price;
                nation_balance = (double)balance - payment;
                printf("\n��~������ �Ϸ�Ǿ����ϴ�. ���� �ܾ��� %lf ��(%lf ����ȭ)�Դϴ�. ��ſ� ���� �Ǽ���.", korea_balance, nation_balance);
                break;
            }
            else {
                printf("\n�ߺ�~�ܾ��� �����մϴ�.");
                break;
            }
        case 4:
            korea_payment = change_price;
            printf("3. ���� ī�� �ܾ��� �Է��ϼ���(������ �����, ����ȭ) : ");
            scanf_s("%d", &balance);
            payment = change_price / euro;
            printf("\n\n���� �ݾ��� %lf ��(%lf ����)�Դϴ�.", korea_payment, payment);
            if (balance >= payment) {
                korea_balance = (double)balance * euro - change_price;
                nation_balance = (double)balance - payment;
                printf("\n��~������ �Ϸ�Ǿ����ϴ�. ���� �ܾ��� %lf ��(%lf ����)�Դϴ�. ��ſ� ���� �Ǽ���.", korea_balance, nation_balance);
                break;
            }
            else {
                printf("\n�ߺ�~�ܾ��� �����մϴ�.");
                break;
            }
        case 5:
            korea_payment = change_price;
            printf("3. ���� ī�� �ܾ��� �Է��ϼ���(������ �����, ����ȭ) : ");
            scanf_s("%d", &balance);
            payment = change_price / euro;
            printf("\n\n���� �ݾ��� %lf ��(%lf ����)�Դϴ�.", korea_payment, payment);
            if (balance >= payment) {
                korea_balance = (double)balance * euro - change_price;
                nation_balance = (double)balance - payment;
                printf("\n��~������ �Ϸ�Ǿ����ϴ�. ���� �ܾ��� %lf ��(%lf ����)�Դϴ�. ��ſ� ���� �Ǽ���.", korea_balance, nation_balance);
                break;
            }
            else {
                printf("\n�ߺ�~�ܾ��� �����մϴ�.");
                break;
            }
        default:
            printf("3. ���� ī�� �ܾ��� �Է��ϼ���(������ �����, ��ȭ) : ");
            scanf_s("%d", &balance);
            payment = change_price;
            printf("\n\n���� �ݾ��� %lf ���Դϴ�.", payment);
            if (balance >= payment) {
                korea_balance = (double)balance - change_price;
                printf("\n��~������ �Ϸ�Ǿ����ϴ�. ���� �ܾ��� %lf ���Դϴ�. ��ſ� ���� �Ǽ���.", korea_balance);
                break;
            }
            else {
                printf("\n�ߺ�~�ܾ��� �����մϴ�.");
                break;
            }
        }

    }
   
    return 0;

}
/*
       --�ϼ�--
       �⺻���� ���ǽĸ� ���� �������⶧���� ũ�� ��ưų� ������ �ʾҽ��ϴ�.
       ������ �ϸ鼭 �������� ���θ� �ٽ��Ҽ��־ ���ҽ��ϴ�.
       ���ʺκ��� Ȯ���� �ϸ鼭 ���������� ���ϰڽ��ϴ�.
       �׻� ���� ���� �����մϴ�.
*/