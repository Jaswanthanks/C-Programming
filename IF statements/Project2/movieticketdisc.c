#include<stdio.h>
#include<stdbool.h>

int main(){

    float price = 10.00;
    bool student = false;
    bool senior = true;
    if(student){
    if(senior){
        printf("you get the senoir disct of 20%\n");
        printf("you get an student dist of 10%\n");
        price *= 0.7;
    }
       else{
                printf("you get an student dist of 10%\n");
                price *= 0.9;
       }
    }
    else{
        if(senior){
        printf("you get the senoir disct of 20%\n");
        
        printf("you get an student dist of 10%\n");
        price *= 0.8;
    }
    }

    
    

    printf("the price of a ticket id : $%.2f\n" , price);


    return 0;
}