#include<stdio.h>
int main(){
    int choice;
    float minutes,hours,days,months,seconds,years;
    printf("enter the years for conversion:\n");
    scanf("%f",&years);
    printf("enter 1 for minutes:\n");
    printf("enter 2 for hours: \n");
    printf("enter 3 for days.\n");
    printf("enter 4 for months.\n");
    printf("enter 5 for seconds.\n");
    printf("enter the choice:\n");
    scanf("%d",&choice);
switch(choice){
    case 1:
  minutes=years*365*24*60;
  printf("the minutes is: %f",minutes);
  break;

  case 2:
  hours=years*365*24;
 printf("the hours is: %f",hours);
 break;

 case 3:
days=years*365;
printf("the days= %f",days);
break;

case 4:
months=years*12;
printf("the total months=%f",months);
break;

case 5:
seconds=years*365*24*60*60;
printf("the total seconds=%f",seconds);
break;

default :
printf("you choosed wrong choice");
break;
}
 return 0;
}