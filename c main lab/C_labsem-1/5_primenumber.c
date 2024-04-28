#include<stdio.h>
int main(){
    int num,flag=0,i;
    printf("ente rthe number:");
    scanf("%d",&num);
for(i=2;i<=num/2;i++){
    if(num%i==0){
  flag=1;
    break;
    }
  
}
if(flag==0){
    printf("% is  aprime number",num);
}
else{
    printf(" %d is not a prime number.",num);
}
return 0;
}