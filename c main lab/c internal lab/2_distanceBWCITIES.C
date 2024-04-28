#include<stdio.h>
int main(){
    float dkm,meter,feet,inches,centimeter;
    printf("Enter the distance between two cities:\n");
    scanf("%f",&dkm);
    meter=dkm*1000;
    feet=dkm*3280.84;
    inches=dkm*39370.1;
    centimeter=dkm*100000;
    printf("The conversions are:\n");
    printf("In meter=%f",meter);
    printf("\n In feet=%f",feet);
    printf("\n In inches =%f",inches);
    printf("\n In centimeter=%f",centimeter);
    return 0;
}