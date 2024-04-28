#include<stdio.h>
int main(){
    float dkm,meter,feet,inches,centimeter;
    printf("enter the distence between two cities:");
    scanf("%f",&dkm);
    meter=dkm*1000;
    feet=dkm*3280.84;
    inches=dkm*39370.1;
    centimeter=dkm*100000;
    printf("the conversions are:\n");
    printf("In meter is : %f\n",meter);
    printf("In feet is:%f\n",feet);
    printf("In inches is:%f\n",inches);
    printf("In centimeters is : %f",centimeter);

    return 0;
}