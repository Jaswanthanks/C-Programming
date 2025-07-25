#include<stdio.h>

int main(){

    int dayofweek = 0;

    printf("enter the number of the week  (1-5) : ");
    scanf("%d" , &dayofweek);
    
    switch(dayofweek){
        case 1 : 
            printf("monday");
            break;
        case 2 :
            printf("tues");
            break;
        case 3 :
            printf("wed");
            break;
        case 4:
            printf("thurs");
            break;
        case 5 :
            printf("fri");
            break;
        default : 
            printf("enter the valid option");

    }




    return 0;
}