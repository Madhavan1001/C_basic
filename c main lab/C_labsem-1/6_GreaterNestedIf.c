#include<stdio.h>
int main(){
    int num1,num2,num3;
    printf("enter three numbers:");
    scanf("%d%d%d",&num1,&num2,&num3);
    if(num1>num2){
        if(num1>num3){
            printf("te greatest is: %d",num1);
        }else{
            printf("the greatest is : %d",num3);
        }
    }
    else{
        if(num2>num3){
            printf("the greatest  is : %d",num2);

        }else{
            printf("greatest is %d",num3);

        }
    }
    return 0;
}