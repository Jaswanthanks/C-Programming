#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int getcompchoice();
int getuserchoice();

void checkwinner(int userchoice , int compchoice);

int main(){


    srand(time(NULL));

    printf("Rock Paper Scissors\n");

    int userchoice = getuserchoice();
    int compchoice = getcompchoice();
    
    switch(userchoice){
        case 1 : 
            printf("ROCK\n");
            break;
        case 2 : 
            printf("Paper");
            break;
        case 3 : 
            printf("Scissor");
    }
     switch(compchoice){
        case 1 : 
            printf("Comp : ROCK\n");
            break;
        case 2 : 
            printf("Comp : Paper");
            break;
        case 3 : 
            printf("Comp : Scissor");
    }

    checkwinner(userchoice , compchoice);



    return 0;
}
int getcompchoice(){
     return (rand() % 3) + 1;
}

int getuserchoice(){
     int choice = 0;
     do{
            printf("choose an option : \n");
            printf("1 . ROCK \n");
            printf("2 . paper\n");
            printf("3 . scissor\n");
            scanf("%d\n" , &choice);
     }while(choice < 1 || choice > 3);
}

void checkwinner(int userchoice , int compchoice){
    if(userchoice == compchoice){
        printf("then its an tie\n");
    }
    else if(userchoice == 1 && compchoice == 3){
        printf("user win");
    }
    else if(userchoice == 2 && compchoice == 1){
        printf("user win");
    }
    else if(userchoice == 3 && compchoice == 2){
        printf("user win");
    }
    else{
        printf("You lose");
    }
}