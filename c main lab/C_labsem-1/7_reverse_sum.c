#include<stdio.h>
int main(){
    int num,reversedNum=0,originalNum,sum=0,remainder;
    printf("enter the number:");
    scanf("%d",&num);
    originalNum=num;
    while (num!=0)
    {
        remainder=num%10;
        reversedNum=reversedNum*10+remainder;
        sum=sum+remainder;
        num=num/10;
    }
    printf("the reversed num is: %d",reversedNum);
    printf("the sum of digits=%d",sum);
    return 0;
}