#include<stdio.h>

int main(){
   int score[5] = {0};
   for( int i=0; i < sizeof(score)/sizeof(score[0]);i++){
        printf("\n enter an score\n");
        scanf("%d" , &score[i]);
   }

   for(int i = 0 ; i < 5 ; i++){
    printf("%d " , score[i]);
   }


    return 0;
}