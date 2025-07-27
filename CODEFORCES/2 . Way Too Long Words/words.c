#include<stdio.h>

#include<string.h>


void strlenword(char word[]){
    int len = strlen(word);

    if(len > 10){
        printf("%c",word[0]);
        printf("%d",len-2); // - for undestanding take the word localization 
                            // - where the total words are 12 - so we havee to find 
                            // - the word count between the first and the last word soo , [ 12 - 2 = 10 ] and we have to display the number

        printf("%c\n",word[len-1]);
    }
    else{
        printf("%s\n",word);
    }
}

int main(){
    char input[100];
    printf("enter the word : ");
    scanf("%s",&input);

    printf("the shortening of the words are : ");
    strlenword(input);

    return 0;
}