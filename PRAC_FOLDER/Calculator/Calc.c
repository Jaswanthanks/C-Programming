#include<stdio.h>

int main(){

    double x = 0;
    double y = 0;
    float result = 0.0f;
    char operator = '\0';

    printf("Enter the first number for calculation X : ");
    scanf("%lf" , &x);
    printf("Enter the second number for calculation Y : ");
    scanf("%lf",&y);
    getchar();

    printf("Enter the operator for the process : ");
    scanf("%c",&operator);


    switch(operator){
        case '+' : 
            result = x + y;
            break;
        case '-':
            result = x -y;
            break;
        case '*':
            result = x * y;
            break;
        case '/':
            result = x/y;
            break;
        default:
            printf("enter the valid option ? ");
    }

    printf("Result %.2f\n",result);
    return 0;

}