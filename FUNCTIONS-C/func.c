#include<stdio.h>
#include<string.h>

void happybday(char name[] , int age){
    printf("\n happy birthday to you ");
        printf("\n happy birthday to you ");
            printf("\n happy birthday to dear %s!" , name);
                printf("\n happy birthday to you ");
                    printf("\n you are %d year old \n " , age);


}
int main(){

    char names[50] = "";
    int aged = 0;

    printf("enter the name : ");
    fgets(names , sizeof(names) , stdin);
    names[strlen(names)-1] = '\0';

    printf("enter the age : ");
    scanf("%d" , &aged);
    
    happybday(names,aged);


    return 0;
}