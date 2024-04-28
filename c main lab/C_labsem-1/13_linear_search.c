#include<sdoias.h>
int main(){
    int search,i,a[10],limit;
    printf("enter the limit:");
    scanf("%d",&limit);
    printf("enter the elements:");
    for(i=0;i<limit;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the element to search in the array:");
    scanf("%d",&search);
    for(i=0;i<limit;i++){
    if(search==a[i]){
        printf("element %d found at location %d",search,i+1);
    }
    if(limit==i){
        printf("eleent not found.");
    }
    }
    return 0;
}