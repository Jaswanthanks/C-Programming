#include<stdio.h>
#include<string.h>
int main(){

    char item[50] = "";
    float price = 0.0f;
    int quan = 0;
    char currency = '$';
    float total = 0.0f;


    printf("what are you buying : ? ");
    fgets(item , sizeof(item) , stdin);
    item[strlen(item) - 1] = "\0";
    printf("what is the price of each item : ? ");
    scanf("%f" , &price);
    printf("how many would u like : ? ");
    scanf("%d" , &quan);

    total = price*quan;
    printf("total price is  : %c%.2f\n",currency,total);

    printf("you have brought %d %s" , quan , item);
    printf("AND THE TOTAL IS :  %c%.2f ",total);


    return 0;
}