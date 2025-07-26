#include<stdio.h>
#include<string.h>


int main(){

    int i , len , flag = 1;

    char str[100];
    char reverse[100];

    printf("enter the charater : ");
    scanf("%s",&str);


    len = strlen(str);

    for(i=0;i<len;i++){
        reverse[i] = str[len-i-1];
    }
    reverse[len] = '\0';

    for(i=0;i<len;i++){
        if(str[i] != reverse[i]){
            flag=0;
            break;
        }
    }

    if(flag){
        printf("%s is palindrone \n",str);
    }
    else{
        printf("%s is not an palindrome \n",str);
    }

    return 0;

}