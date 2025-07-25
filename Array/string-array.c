#include<stdio.h>

int main(){

    char fruits[][10] = {"apple" , "banana" , "guava"};

    fruits[0][0] = 'A'; //this is used for data manipulation 

    for(int i=0 ; i< sizeof(fruits)/sizeof(fruits[0]);i++){
        printf("%s\n", fruits[i]);
    }
     
    return 0;
}