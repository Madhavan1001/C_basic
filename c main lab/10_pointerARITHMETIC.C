#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr_1,*ptr_2,sum=0,a,b,sub;
    printf("enter a number:\n");
    scanf("%d",&a);
    printf("enter the second number: \n");
    scanf("%d",&b);
  ptr_1=&a;
ptr_2=&b;
sum=*ptr_1+*ptr_2;
sub=*ptr_1-*ptr_2;
printf("sum=%d\n",sum);
printf("sub=%d",sub);
return 0;
}