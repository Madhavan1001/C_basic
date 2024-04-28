#include<stdio.h>
void fabi(int limit){
    int first=0,second=1,next;
    printf("the fabinoci series up to %d:\n",limit);
    for(int i=0;i<limit;++i){
    printf("%d ",first);
    next=first+second;
    first=second;
    second=next;
}}
int main(){
    int num;
    printf("enter a nmber");
    scanf("%d",&num);
    if(num<0){
        printf("fabinocci not possible for a negative number");
    }
    else{
        fabi(num);
    }
    return 0;
}