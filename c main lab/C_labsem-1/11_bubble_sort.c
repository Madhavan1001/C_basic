#include<stdio.h>
int main(){
    int limit,i,j,a[10],temp;
    printf("enter a limit");
    scanf("%d",&limit);
    printf("enter the elements to sort(ascending):");

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
        printf("sorted elements : ");
        for(i=0;i<limit;i++){
       printf("\t%d",a[i]);
        }
    }
    return 0;
}