#include<stdio.h>


int main(){

    int numbers[][3] = {{1,2,3} , {5,6,7} , {8,9,10}};

    for(int i = 0 ; i < 3 ; i++){
        for(int j =0 ; j < 3 ; j++){
            printf("%d " , numbers[i][j]);
        }
        printf("\n");
    }



    return 0;

}