#include<stdio.h>
#include<stdbool.h>

void hello(char name[] , int age);
bool checkage(int age);
int main(){
    printf("hello",30);

    if(checkage(30)){
        printf("you are old enough to work ar the crabs");
    }
    else{
        printf("you must be 16+ to work at crabs");
    }


    return 0;
}
void hello(char name[] , int age){
    printf("hello %s\n",name);
    printf("you are %d years old \n",age);
}
bool checkage(int age){
    return age>=16;
}