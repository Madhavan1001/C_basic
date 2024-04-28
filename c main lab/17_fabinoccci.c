#include<stdio.h>
void fabi(int limit){
  int first=0,second=1,next;
     printf("th fabinocci series up to %dis:\n",limit);
     
  for(int i=0;i<limit;++i){
  printf("%d",first);
   next=first+second;
   first=second;
   second=next;
  }
}

int main()
{
    int num;
    printf("enter the number:\n");
    scanf("%d",&num);
    if(num<0){
        printf("negative number is not alowed  to find fabinocci seroes:\n");
    }
    else{
        fabi(num);
    }
    return 0;
}
































