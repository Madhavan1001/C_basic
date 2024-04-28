#include<stdio.h>
int main(){
    int a,b;
    printf("enter two numbers:");
    scanf("%d%d",&a,&b);
    int *ptr_a=&a;
    int *ptr_b=&b;
    int add,sub;
    add=*ptr_a + *ptr_b;
    sub=*ptr_a - *ptr_b;
    printf("addition of 2 pointer= %d",add);
    printf("sunstraction of 2 pointers =%d",sub);
    return 0;
}