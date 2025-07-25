#include<stdio.h>
#include<string.h>

int main(){

    char name[3][25] = {0};
    for(int i=0;i<sizeof(name) / sizeof(name[0]);i++){
        printf("\n enter the user input for the array : ");
        fgets(name[i] , sizeof(name[i]) , stdin);
        name[i][strlen(name[i]) - 1] = '\0';
    }
   for(int i=0;i<sizeof(name) / sizeof(name[0]);i++){
    printf("%s\n", name[i]);
   }
    return 0;
}