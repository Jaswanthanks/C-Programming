#include<stdio.h>


int main(){

    int number[5];
    printf("Enter the array you want to find even or odd in one line : ");
    for(int i = 0 ;i<sizeof(number) / sizeof(number[0]);i++ ){
        scanf("%d",&number[i]);
    }
    for(int i=0;i<sizeof(number) / sizeof(number[0]);i++){
        printf("%d is %s\n",number[i],(number[i] % 2 ==0) ? "even" : "odd");
    }
    return 0;

}