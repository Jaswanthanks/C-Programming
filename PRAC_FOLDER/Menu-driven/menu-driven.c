#include<stdio.h>
#include<string.h>


void addition();
void subs();
void division();
void multiply();

int main(){
    int choice;
    char contchoice;


    do{
        printf("----enter the choice----");
     }




    return 0;
}

void addition(){
    int a,b;
    printf("The two elements for the process : ");
    scanf("%d %d",a,b);
    printf("Print process output %d+%d=%d\n",a,b,a+b);
}

void subs(){
    int a,b;
    printf("The two elements for the process :");
    scanf("%d %d",a,b);
    printf("Print process output %d-%d=%d\n",a,b,a-b);
}

void division(){
    int a,b;
    printf("The two elements for the process : ");
    scanf("%d %d",a,b);
    printf("Print process output %d/%d=%d\n",a,b,a/b);
}

void multiply(){
    int a,b;
    printf("The two elements for the process : ");
    scanf("%d %d",a,b);
    printf("Print process output %d*%d=%d\n",a,b,a*b);
}