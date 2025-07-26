#include<stdio.h>

int main(){

    int age = 0;

    printf("enter the age : ");
    scanf("%d",&age);

    printf("%d  %s\n",age,(age >=18) ? "is eligible to vote" : "is not eligible");


    return 0;
}