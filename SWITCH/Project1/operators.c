#include<stdio.h>

int main(){

        double x = 0;
        double y = 0;
        float result =0.0;
        char operator = '\0';
        
    printf("enter the 1 number your want to calculate : ");
    scanf("%lf" , &x);
    printf("enter the 2 number your want to calculate : ");
    scanf("%lf" , &y);
    getchar();
    printf("enter the operator for calculation : ");
    scanf("%c" , &operator);

    printf("Calculator is begunn choose your choice");
    
    switch(operator){
        case '+' :
            result = x + y;
            break;
        case '-':
            result = x -y;
            break;
        case '/' :
            result = x / y;
            break;
        case '*':
            result = x * y;
            break;
        default:
            printf ("invalid operator");

    }
    printf("Result: %.2lf\n", result);
    return 0;
}