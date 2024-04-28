#include<stdio.h>
int main(){
        int num,flag=0,i;
    printf("enter the number:\n");

scanf("%d",&num);
for(i=2;i<num/2;i++){
if(num%i==0){
 flag=1;
 break;
}}
if(flag==0){
    printf("the number %d is prime:",num);

}else{
    printf("the number  %dis not a prme:",num);
}

return 0;
}