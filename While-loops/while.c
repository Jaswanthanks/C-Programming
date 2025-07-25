#include<stdio.h>
#include <string.h>
#include<stdbool.h>
#include<math.h>

int main(){

    // int number=0;

    // while(number <=0){
    //     printf("enter the number greater than zero");
    //     scanf("%d", &number);
    // }


    // char name[50] = "";

    // printf("enter your name : ");
    // fgets(name , sizeof(name) , stdin);
    // name[strlen(name)-1] = '\0';

    // while(strlen(name) == 0){
    //     printf("pls enter the name , cannot be empty");
    //     fgets(name , sizeof(name) , stdin);
    //     name[strlen(name)-1] = '\0';
    // }

    // printf("hello %s",name);
    
    bool isrunning = true;
    char resp = '\0';

    while(isrunning){
        printf("the game is running \n");
        printf("would u like to cont Y:yes N:no\n");
        scanf(" %c",&resp);

        if(resp != 'Y' && resp != 'y' ){
            isrunning = false;
        }
    }

    printf("the game exited");


    return 0;
}