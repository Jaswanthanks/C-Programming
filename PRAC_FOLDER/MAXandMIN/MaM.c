#include<stdio.h>

int main(){

    int arr[5];
    int max = 0;
    int min = 0;

    printf("Enter 5 numbers : ");
    for(int i=0;i<sizeof(arr) / sizeof(arr[0]);i++){
        scanf("%d",&arr[i]);
    }

    min = max = arr[0];

    for(int i=1;i<sizeof(arr) / sizeof(arr[0]);i++){
        if(arr[i]>max)
            max = arr[i];
        if(arr[i]<min)  
        min = arr[i];
    }

    printf("the minimum value is : %d\n", min);
    printf("the maximum value is : %d\n" , max);




    return 0;
}