#include <stdio.h>
    
int main() {
    
    const int dollar = 1116;  //기호상수를 통해 각 화폐별 금액을 저장
    const int yen = 10;
    const int yuan = 170;
    const int euro = 1326;

    const double child = 1;  //기호상수를 통해 각 나이별 할인율을 저장
    const double youth = 0.2;
    const double adult = 0;
    const double old = 0.5;

    int price = 0; //입력할 요금
    int age = 0; //나이
    int nation = 0; //국가
    int balance = 0; //결제 카드 잔액

    double change_price = 0; //할인율이 적용된 원화가격
    double korea_payment = 0;  //결제할 원화 금액
    double payment = 0; //해당 국가의 화폐로 바꾼 결제 금액
    double korea_balance = 0; //지불하고 남은 원화의 잔액
    double nation_balance = 0; //해당 국가의 화폐로 지불하고 남은 잔액

    printf("0. 요금을 입력하세요(정수형 양수값, 한국 원화) : ");
    scanf_s("%d", &price);
    printf("1. 나이를 입력하세요(정수형 양수값) : ");
    scanf_s("%d", &age);

    if (age >= 0 && 6 >= age) { //나이별로 할인되는 요금을 다르게 하여 저장
        change_price = (double)price - ((double)price * child);
        printf("\n\n\n무료탑승입니다.  즐거운 여행 되세요.");
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

  
    if (change_price != 0) { // 할인된요금이 0원이 아니면 해당 조건문 시행
        printf("2. 사용할 화폐 국가를 입력하세요 (미국은 1, 일본은 2, 중국은 3, 독일은 4, 프랑스는 5, 한국은 그 이외 숫자 입력) : ");
        scanf_s("%d", &nation);
        switch (nation) { //입력된 국가별 case별로 다른 조건수행
        case 1:
            korea_payment = change_price; //지불할 원화는 할인된 요금으로 저장
            printf("3. 결제 카드 잔액을 입력하세요(정수형 양수값, 달러화) : ");
            scanf_s("%d", &balance);
            payment = change_price / dollar; //사용할 화폐가 미국일시 할인된 원화금액에 dollar를 나누어 해당 화폐 금액을 저장
            printf("\n\n결제 금액은 %lf 원(%lf 달러)입니다.", korea_payment, payment);
            if (balance >= payment) { //잔액의 크기가 지불할 금액의 크기보다 크거나 같을때 조건시행
                korea_balance = (double)balance * dollar - change_price; //원화잔액은 해당국가화폐금액에서 해당국가에 화폐단위를 곱한값에 지불해야할 할인금액을 뺀값으로 저장
                nation_balance = (double)balance - payment; //해당국가 화폐로의 잔액은 입력한 해당국가잔액에서 지불할 해당화폐금액을 뺀값으로 저장
                printf("\n삑~결제가 완료되었습니다. 남은 잔액은 %lf 원(%lf 달러)입니다. 즐거운 여행 되세요.", korea_balance, nation_balance); //원호로써의 잔액과 해당화폐로써의 잔액을 각각 출력
                break;
            }
            else {
                printf("\n삐빅~잔액이 부족합니다."); //잔액의 크기가 지불할 금액의 크기보다 작을때 조건시행 
                break;
            }
        case 2:
            korea_payment = change_price;
            printf("3. 결제 카드 잔액을 입력하세요(정수형 양수값, 엔화) : ");
            scanf_s("%d", &balance);
            payment = change_price / yen;
            printf("\n\n결제 금액은 %lf 원(%lf 엔화)입니다.", korea_payment, payment);
            if (balance >= payment) {
                korea_balance = (double)balance * yen - change_price;
                nation_balance = (double)balance - payment;
                printf("\n삑~결제가 완료되었습니다. 남은 잔액은 %lf 원(%lf 엔화)입니다. 즐거운 여행 되세요.", korea_balance, nation_balance);
                break;
            }
            else {
                printf("\n삐빅~잔액이 부족합니다.");
                break;
            }
        case 3:
            korea_payment = change_price;
            printf("3. 결제 카드 잔액을 입력하세요(정수형 양수값, 위안화) : ");
            scanf_s("%d", &balance);
            payment = change_price / yuan;
            printf("\n\n결제 금액은 %lf 원(%lf 위안화)입니다.", korea_payment, payment);
            if (balance >= payment) {
                korea_balance = (double)balance * yuan - change_price;
                nation_balance = (double)balance - payment;
                printf("\n삑~결제가 완료되었습니다. 남은 잔액은 %lf 원(%lf 위안화)입니다. 즐거운 여행 되세요.", korea_balance, nation_balance);
                break;
            }
            else {
                printf("\n삐빅~잔액이 부족합니다.");
                break;
            }
        case 4:
            korea_payment = change_price;
            printf("3. 결제 카드 잔액을 입력하세요(정수형 양수값, 유로화) : ");
            scanf_s("%d", &balance);
            payment = change_price / euro;
            printf("\n\n결제 금액은 %lf 원(%lf 유로)입니다.", korea_payment, payment);
            if (balance >= payment) {
                korea_balance = (double)balance * euro - change_price;
                nation_balance = (double)balance - payment;
                printf("\n삑~결제가 완료되었습니다. 남은 잔액은 %lf 원(%lf 유로)입니다. 즐거운 여행 되세요.", korea_balance, nation_balance);
                break;
            }
            else {
                printf("\n삐빅~잔액이 부족합니다.");
                break;
            }
        case 5:
            korea_payment = change_price;
            printf("3. 결제 카드 잔액을 입력하세요(정수형 양수값, 유로화) : ");
            scanf_s("%d", &balance);
            payment = change_price / euro;
            printf("\n\n결제 금액은 %lf 원(%lf 유로)입니다.", korea_payment, payment);
            if (balance >= payment) {
                korea_balance = (double)balance * euro - change_price;
                nation_balance = (double)balance - payment;
                printf("\n삑~결제가 완료되었습니다. 남은 잔액은 %lf 원(%lf 유로)입니다. 즐거운 여행 되세요.", korea_balance, nation_balance);
                break;
            }
            else {
                printf("\n삐빅~잔액이 부족합니다.");
                break;
            }
        default:
            printf("3. 결제 카드 잔액을 입력하세요(정수형 양수값, 원화) : ");
            scanf_s("%d", &balance);
            payment = change_price;
            printf("\n\n결제 금액은 %lf 원입니다.", payment);
            if (balance >= payment) {
                korea_balance = (double)balance - change_price;
                printf("\n삑~결제가 완료되었습니다. 남은 잔액은 %lf 원입니다. 즐거운 여행 되세요.", korea_balance);
                break;
            }
            else {
                printf("\n삐빅~잔액이 부족합니다.");
                break;
            }
        }

    }
   
    return 0;

}
/*
       --완성--
       기본적인 조건식만 쓰는 과제였기때문에 크게 어렵거나 힘들지 않았습니다.
       과제를 하면서 기초적인 공부를 다시할수있어서 좋았습니다.
       기초부분을 확실히 하면서 다음수업에 임하겠습니다.
       항상 좋은 강의 감사합니다.
*/