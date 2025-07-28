#include<stdio.h>


typedef struct{
    char name[50];
    float mileage;
    float price;
    char companyname[50];
    char colours_available[50];
}cars;


void printcars(cars car);


int main(){

    int choice;
    char continuechoice;


    cars car1 = {"mustang",23.4,43400,"FORD","red,pink,green,black"};
    cars car2 = {"Polo GT",43.4,26400,"VOLKSWAGEN","red,gray,green,black"};
    cars car3 = {"VISTARA",33.4,23400,"VOLKSWAGEN","red,gray,green,black"};
    cars car4 = {"Phantom Ghost",20.4,500000,"ROLL ROYCE","red,pink,green,black,All custom colours"};


    do{
        printf("\n---Enter the choices to print the car details---\n");
        printf("\n1 . Mustang\n");
        printf("\n2.Polo GT\n");
        printf("\n3.VISTARA\n");
        printf("\n4.Phantom Ghost\n");
        printf("\nEnter your choice to display details : ");
        scanf("%d",&choice);


        switch(choice){
            case 1 : 
            printcars(car1);
            break;
            case 2 : 
            printcars(car2);
            break;
            case 3 : 
            printcars(car3);
            break;
            case 4 : 
            printcars(car4);
            break;
            default : 
            printf("enter an correct valid option");
    }
    printf("\nDo you want to continue to view details of other cars : ");
    scanf(" %c" , &continuechoice);
    }while(continuechoice == 'Y' || continuechoice == 'y');

    printf("Program Terminated due to invalid option ");
    return 0;
}

void printcars(cars car){
    printf("\nName of the car : %s\n",car.name);
    printf("Mileage of the car : %f\n",car.mileage);
    printf("Price of the car : %.2f\n",car.price);
    printf("Company related to the car : %s\n",car.companyname);
    printf("Colours available for the car : %s\n",car.colours_available);
}