#include<stdio.h>


float simpleI(float p , float r , float t){
    return  (p*r*t)/100;
}

float compoundI(float p , float r , float t){
    return p * pow ((1+r/100) , t) - p;
}

int main(){
    float principal , rate , time;

    printf("Enter the principal : \n");
    scanf("%f", &principal);

    printf("Enter the rate : \n");
    scanf("%f",&rate);

    printf("Enter the time : \n");
    scanf("%f",&time);


    float si = simpleI(principal,rate,time);
    float ci = compoundI(principal,rate,time);

    printf("The simple interest is : %.2f\n",si);
    printf("The compound Interest is : %.2f\n",ci);


    return 0;
}