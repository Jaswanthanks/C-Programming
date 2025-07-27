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
        printf("1.Addtion\n");
        printf("\n2.Subtract\n");
        printf("\n3.Division\n");
        printf("\n4.Multiplication");
        printf("\nEnter your choice : ");
        scanf("%d",&choice);

        switch(choice){
            case 1 : 
                addition();
                break;
            case 2 : 
                subs();
                break;
            case 3 : 
                division();
                break;
            case 4 :
                multiply();
                break;
            default : 
            printf("Enter an valid option : ##  : ");
        }
        printf("\n Do you want to continue the process :  %c");
        scanf(" %c",&contchoice);
     }while(contchoice == 'Y' || contchoice == 'y');

     printf("Program Terminated .\n");

    return 0;
}

void addition(){
    int a,b;
    printf("The two elements for the process in one line :");
    scanf("%d %d",&a,&b);
    printf("Print process output %d+%d=%d\n",a,b,a+b);
}

void subs(){
    int a,b;
    printf("The two elements for the process in one line :");
    scanf("%d %d",&a,&b);
    printf("Print process output %d-%d=%d\n",a,b,a-b);
}

void division(){
    int a,b;
    printf("The two elements for the process in one line :");
    scanf("%d %d",&a,&b);
    printf("Print process output %d/%d=%d\n",a,b,a/b);
}

void multiply(){
    int a,b;
    printf("The two elements for the process in one line :");
    scanf("%d %d",&a,&b);
    printf("Print process output %d*%d=%d\n",a,b,a*b);
}