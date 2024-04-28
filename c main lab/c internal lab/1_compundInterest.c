#include<stdio.h>
#include<math.h>
int main(){
    float principle,rate,time,CI;
    printf("enter the principle amount:\n");
    scanf("%f",&principle);
    printf("enter the rate:\n");
    scanf("%f",&rate);
    printf("enter the time:\n");
    scanf("%f",&time);
    CI=principle*pow(1+rate/100,time);
    printf("The compound Interest is:%f",CI);
    return 0;
}