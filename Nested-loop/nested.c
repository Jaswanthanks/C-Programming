#include<stdio.h>

int main(){
    int cols = 0;
    int rows = 0;
    char symbol = '\0';

    printf("enter the number of rows : ");
    scanf("%d",&rows);

    printf("enter the number of cols : ");
    scanf("%d", &cols);

    printf("enter the symboll you want too print : ");
    scanf(" %c" , &symbol);

    for(int i=0 ; i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("%c" , symbol);
        }
        printf("\n");
    }

    return 0;
}