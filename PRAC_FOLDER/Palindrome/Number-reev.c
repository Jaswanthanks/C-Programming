#include<stdio.h>


int main(){

    int num;
    int reverse=0;
    int remainder;
    int original;

    printf("enter the numbers : ");
    scanf("%d",&num);

    original = num;

    while(num !=0){
        remainder = num %10;
        reverse = reverse * 10 + remainder;
        num /=10;
    }

    if(original == reverse){
        printf("%d is an palindrome\n",original);
    }
    else{
        printf("%dd is not an palindrome\n",original);
    }
    return 0;
    
}