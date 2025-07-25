#include<stdio.h>
 
int addition(int x , int y){
    return x+y;
}

int main(){
    int result = addition(10,20);
    printf("the result is  %d  ",result);

    return 0;
}