#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){

    int guess=0;
    int tries =0;
    int min=10;
    int max=100;
    srand(time(NULL));
    int answer = rand() % (max - min + 1 ) + min;
    

    printf("NUMBER GUESSING GAME \n");

    do{
        printf("Enter the guessed number between %d and %d : ",min,max);
        scanf("%d",&guess);
        tries++;
        if(guess < answer){
            printf("the answers is low\n");

        }
        else if(guess > answer){
            printf("Answer is to high\n");
        }
        else{
            printf("the answers is correct\n");
        }
    }while(guess != answer);

    printf("the answers is : %d\n",answer);
    printf("the number of tries are %d\n",tries);

    return 0;
}