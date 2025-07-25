#include<stdio.h>
#include<math.h>

int main(){

    double prinp = 0.0;
    double rate = 0.0;
    int years = 0;
    int timecompound = 0;
    double total = 0.0;

    printf("Compound interest calculator : ");
    printf("enter the principal (P) : ");

    scanf("%lf" , &prinp);


    printf("enter the interest rate % (r) : ");
    scanf("%lf" , &rate);
    rate = rate/100;

    printf("enter the number of years :  ");
    scanf("%d" , &years);

    printf("enter the number of years of time compound : ");
    scanf("%d" , &timecompound);

    total = prinp * pow(1 + rate / timecompound , timecompound * years);

    printf("after the amount of years %d , the total will be $%.2lf" , years , total);






    return 0;

}