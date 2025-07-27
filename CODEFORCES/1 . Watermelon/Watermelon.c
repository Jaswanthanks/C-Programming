#include<stdio.h>

int main(){

    int weight = 0;
    printf("enter the weight of the watermelon : ");

    scanf("%d",&weight);

    printf("\nthe weight of watermelon  %d , can it be divided into 2 parts %s",weight,(weight % 2 == 0 && weight > 2) ? "yes" : "no");


    return 0;
}