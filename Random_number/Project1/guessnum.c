#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){


    srand(time(NULL));

    int guess = 0;
    int tries = 0;
    int min = 10;
    int max = 100;
    int answer = (rand() % (max - min + 1)) + min;

    printf("Welcome to number guessing game\n");

    do{
        printf("guess a number between %d - %d : " , min , max);
        scanf("%d",&guess);
        tries++;
        if(guess < answer){
            printf("too low\n");
        }
        else if(guess > answer){
            printf("too high\n");
        }
        else{
            printf("the answer is correct\n");
        }
    }while(guess != answer);


    printf(" the answer is %d\n",answer);
    printf("the number of tries %d\n",tries);

    return 0;

}