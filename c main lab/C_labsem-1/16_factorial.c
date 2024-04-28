#include<stdio.h>
float factorial(int n){
    if(n==0 || n==1){
    return 1;
    }else{
        return n*factorial(n-1);
    }
}
int main(){
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    if(num<0){
        printf("the number connot be a negative one.");
    }else{
        float result=factorial(num);
        printf("foactocial of %d is : %f",num,result);
    }
    return 0;
}