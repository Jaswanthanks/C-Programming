#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

    srand(time(NULL));

    int randomnum = rand() % 2;

    printf("%d",randomnum);
    return 0;
}