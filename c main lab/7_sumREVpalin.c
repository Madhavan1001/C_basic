#include<stdio.h>
int main(){
    int num,originalNum,reversedNum=0,sum=0,remainder;
    printf("enter the num:");
    scanf("%d",&num);
    originalNum=num;
    while (num != 0)
    {
        remainder=num%10;
        reversedNum=reversedNum*10+remainder;
        sum=sum+remainder;
        num=num/10;
    }
         if(originalNum == reversedNum){
        printf("the number is a palindrome\n");
    }else{
        printf("the number is not a palindrome\n");
    }
    
     printf("the orignal number is :%d \n",originalNum);
     printf("the reversed num is:%d\n",reversedNum);
     printf("the sum of digits:%d\n ",sum);

     return 0;
}