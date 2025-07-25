#include<stdio.h>

int main(){
    
    int choice = 0;
    float pounds = 0.0f;
    float kilo = 0.0f;

    printf("weight convertion calculation : ");
    printf(" 1 . kilo to pounds : \n");
    printf(" 2 . pounds to kilo \n");
    printf("enter your choice : ");
    
    scanf("%d", &choice);
    if(choice ==1){
        //kg to pounds
        printf("enter the weight in kg ");
        scanf("%f" , &kilo);
        pounds = kilo * 2.20462;
        printf("%.2f kilograms is equal to %.2f pounds \n" ,  kilo , pounds );
    }
    else if( choice ==2){
        //pounds to kg
        printf("enter the weight in pounds");
        scanf("%f" , &pounds);
        kilo = pounds / 2.20462;
        printf("%.2f pounds is equal to %.2f kilograms \n" , pounds , kilo  );
    }
    else{
        //enter the correct choice
        printf("select the valid choice");
    }


    return 0;
}