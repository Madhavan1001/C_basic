#include<stdio.h>

    float factorial(int n){
        if(n==0 || n==1){
            return 1;
        }
        else{
            return n*factorial(n-1);
        }
    }

    int main(){
        int num;
        printf("enter the number:\n");
        scanf("%d",&num);
        if(num<0){
            printf("the negative number is not possible.");
        }else{
           float result=factorial(num);
            printf("factorial od %d is : %.2f",num,result);

        }
        return 0;
}   