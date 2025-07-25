#include<stdio.h>
#include<ctype.h>

int main(){

    char questions[][100] = {
        "what is the biggest planet",
        "what is the hottest planet"
    };

    char option[][100] = {
        "A.Earth\nB.Jupter\nC.Mars",
        "A.Mercury\nB.Earth\nC.Venus"
    };

    char answer[] = {'B' , 'A'};

    char guess;
    int score = 0;

    int questionsize = sizeof(questions) / sizeof(questions[0]);

    for(int i=0;i<questionsize;i++){
        printf("\nQuestions %d : %s\n" , i+1 , questions[i]);
        printf("%s\n",option[i]);
        fflush(stdin);
        printf("Enter your choice (A,B,C,D) : ");
        scanf("%c" , &guess);
        guess = toupper(guess);
        if(guess == answer[i]){
            printf("correct\n");
            score++;
        }
        else{
            printf("wrong cthe correct answer is : %c",answer[i]);
        }
    }

    printf("the total score you scored is : %d out of %d\n",score , questionsize);


    return 0;
}