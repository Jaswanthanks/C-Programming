#include<stdio.h>
#include<stdbool.h>
int main(){

    // int  x =5;
    // int y = 6;
    // int max = (x > y) ? x:y;
    // printf("%d",max);

    // bool isonline = false;

    // printf("%s" , (isonline) ? "online" : "offline");

    // int number;

    // printf("to find whether the input number is even or odd : ");
    // scanf("%d",&number);

    // printf("%d is %s", number, (number % 2 == 0) ? "even" : "odd");

    // return 0;

    int hours;
    int minutes;


    printf("enter the hours in global timing : ");
    scanf("%d",&hours);
    printf("\nEnter the minutes");
    scanf("%d",&minutes);

    printf(" %d and %d is %s",hours,minutes,(hours >= 16) ? "is evening" : "afternoon or morning" );



}