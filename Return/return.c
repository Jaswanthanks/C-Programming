#include<stdio.h>
#include<stdbool.h>

// int cube(int num){
//     int result = num * num * num;
//     return result;
// }

bool agecheck(int age){
        if(age >= 18){
            return true;    
        }
        else{
            return false;
        }
    }
int main(){

    // int x = cube(2);
    // int y = cube(3);
    // int z = cube(4);


    // printf("%d\n" , x);
    // printf("%d\n" , y);
    // printf("%d\n" , z);

    
        int age = 20;

        if(agecheck(age)){
            printf("you are eligible to signup ");
        }
        else{
            printf("ur not ");
        }


    return 0;
}