#include<stdio.h>
#include<stdlib.h>
#include<time.h>



void checkbalance(float balance);
float deposit();
float withdraw(float balance);

int main(){

    int choice = 0;
    float balance = 0.0f;

    printf("welcome to our bank\n");

    do{
        printf("\nSelect an option : \n");
        printf("\n1. Check balance\n");
        printf("\n2. Make the deposit\n");
        printf("\n3.withdraw money\n");
        printf("\n4. Exit\n");

        printf("\n Enter your choice : ");
        scanf("%d",&choice);

        switch(choice){
            case 1 : 
                printf("\n check balance\n");
                checkbalance(balance);
                break;
            case 2 : 
                printf("\n Make an deposit\n");
                balance += deposit();
                break;
            case 3 : 
                printf("\n withdraw money\n");
                balance-=withdraw(balance);
                break;
            case 4 : 
                printf("\nEXIT\n");
                break;
            default : 
                printf("\nenter the valid options (1 - 4)\n");
            }

    }while(choice != 4);

    return 0;
}

void checkbalance(float balance){
    printf("\n YOUR CURRENT BALANCE IS  : $%.2f\n",balance);
}
float deposit(){
    printf("");

    float amount = 0.0f;
    printf("\nMake the deposit : $ \n");
    scanf("%f",&amount);
    if(amount < 0){
        printf("enter the amount more than zero\n");
        return 0.0f;
    }
    else{
        printf("sucessull deposit $%.2f",amount);
        return amount;

    }

}
float withdraw(float balance){

    float amount = 0.0f;
    printf("enter amount to withdraw $");
    scanf("%f",&amount);
    if(amount < 0){
        printf("you cannot withdraw money less than 0\n");
        return 0.0f;
    }
    else if(amount > balance){
        printf("insuffeint fund , your balance is $%.2f \n",balance);
        return 0.0f;
    }
    else{
        printf("withdraw done $%.2f\n",amount);
        return amount;
    }


    return 0.0f;
}