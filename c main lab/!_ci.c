#include<stdio.h>
#include<math.h>
int main(){
float principle,rate,time,CI;
printf("enter the principlle amount: \n");
scanf("%f",&principle);
printf("enter the timw:\n");
scanf("%f",&time);
printf("enter the  rate:\n");
scanf("%f",&rate);
CI=principle*pow((1+rate/100),time);
printf("the compund interest is = %f",CI);
return 0;
}