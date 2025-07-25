#include<stdio.h>
#include<math.h>

int main(){

    double radius = 0.0;
    double area = 0.0;
    double surfacearea = 0.0;
    double volume = 0.0;
    const double PI = 3.14159;

    printf("enter the radius : ");
    scanf("%lf" , &radius);

    area = PI * pow(radius,2);
    surfacearea = 4 * PI * pow(radius,2);
    volume=(4/3) * PI * pow(radius , 3);

    printf("area of the circle %.2lf\n" , area);
    printf("surface area of an circle : %.2lf\n" ,surfacearea );
    printf("volume of an circle : %.2lf",volume);



    return 0;
}