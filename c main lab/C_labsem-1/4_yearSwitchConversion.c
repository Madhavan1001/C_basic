#include<stdio.h>
int main(){
    float year;
    double minutes,hours,days,months,seconds;
    printf("enter the year:");
    scanf("%f",&year);
    printf("enter the choice:");
    printf("\n1. for minutes");
    printf("\n2. for hours");
    printf("\n3. for days");
    printf("\n4. for months");
    printf("\n 5.for seconds");
int choice;
scanf("%d",&choice);
switch(choice){
case 1:
minutes=year*365*24*60;
printf("the total minutes in %f years= %.2lf",year,minutes);
break;

case 2:
hours=year*365*24;
printf("the total hours in %f years=%.2lf",year,hours);
break;

case 3:
days=year*365;
printf("the total days for %f years= %.2lf",year,days);
break;

case 4:
months=year*12;
printf("the total months in%f years is : %.2lf",year,months);
break;

case 5:
seconds=year*365*24*60*60;
printf("the total seconds in %f years is : %.2lf",year,seconds);
break;

default:
printf("you choice is invalid.");
break;


}
return 0;
}