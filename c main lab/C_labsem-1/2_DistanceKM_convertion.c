#include<stdio.h>
int main(){
    float dkm,mtr,feet,inches,centi;

    printf("enter the distance between two cities i KM:");
    scanf("%f",&dkm);

mtr=dkm*1000;
feet=dkm*3280.84;
inches=dkm*39370.1;
centi=dkm*100000;

printf("the distance in meter=%.2f",mtr);
printf("\nthe distance in feet:%.2f",feet);
printf("\nthe distance in inches=%.2f",inches);
printf("\nthe distance in centi=%.2f",centi);

return 0;


}