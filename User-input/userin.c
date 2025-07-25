#include<stdio.h>

int main(){
    
    int age = 0;
    float gpa = 0.0f;
    char grad = '\0';
    char name[30] = "";

    printf("enter your age : ");
    scanf("%d",&age);
    

    printf("enter your gpa : ");
    scanf("%f",&gpa);
    

    printf("enter your grad : ");
    scanf(" %c",&grad);
    
    getchar();
    printf("enter your name : ");
    fgets(name,sizeof(name),stdin);
    name[strlen(name)-1] = '\0';
  


    printf("%d\n",age);
    printf("%f\n",gpa);
    printf("%c\n",grad);
    printf("%s\n",name);



    return 0;


}