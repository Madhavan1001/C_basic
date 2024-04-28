#include<stdio.h>
int main(){
    int i,j,limit,a[20],temp;
    printf("enter the array limit:\n");
    scanf("%d",&limit);
    printf("enter the elements for the array:");
    for(i=0;i<limit;i++){
        scanf("%d",&a[i]);
    }

    for(i=0;i<limit;i++){
        for(j=0;j<limit-1;j++){
         if(a[j]>a[j+1]){
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;

         }
        }
    }
    printf("the sorted array is:");
    for(i=0;i<limit;i++){
        printf("%d\n",a[i]);
    }
    return 0;
}