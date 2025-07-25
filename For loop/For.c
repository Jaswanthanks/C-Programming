#include<stdio.h>
#include<windows.h>
#include<unistd.h>
int main(){

    // for(int i=0;i<=10;i+=2){
    //     Sleep(1000);
    //     printf("%d\n",i);
    // }
    for(int i=1;i<=10;i++){

        if(i==4){
            continue;
        }
        printf("%d\n",i);
    }
    return 0;
}