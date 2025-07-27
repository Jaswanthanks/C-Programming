#include<stdio.h>
#include<time.h>
#include<stdlib.h>


int main(){
    int n;
    printf("enter the number n to print rows and cols [n][n] : ");
    scanf("%d",&n);

    int array[n][n];

    srand(time(NULL));

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            array[i][j] = rand() % 2;
        }
    }

    printf("\n Random matrix is generated\n");
    for(int i=0;i<n;i++){
        int rowsum=0;
        for(int j=0;j<n;j++){
            printf("%d ",array[i][j]);
            rowsum += array[i][j];
        }
        if(rowsum >1){
            printf(" = success");
        }
        else{
            printf(" = failed");
        }
        printf("\n");
    }




    return 0;

}