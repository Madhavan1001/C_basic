#include<stdio.h>
int main(){
    int limit,i,a[10],search;
    printf("enter the array  limit:\n");
    scanf("%d",&limit);
printf("enter the elements for the array:\n");
    for(i=0;i<limit;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the element to be searched:\n");
    scanf("%d",&search);
    for(i=0;i<limit;i++){
        if(a[i]==search){
            printf("elemnt found at location %d",i+1);
            break;
        }}
        if(i==limit){
            printf("element not found");
        }
    
    return 0;
}