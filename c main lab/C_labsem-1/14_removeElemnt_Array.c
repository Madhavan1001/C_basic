#include<stdio.h>
int main(){
    int arr[]={4,2,3,4,1,4,6,4,8,4,10},i,j;
   int n=sizeof(arr)/sizeof(arr[0]);
   int elementToRemove=4;
   printf("original array:");
   for(i=0;i<n;i++){
    printf("%d",arr[i]);
   }
   printf("\n");
j=0;
for(i=0;i<n;i++){
    if(arr[i]!=elementToRemove){
        arr[j]=arr[i];
        j++;
    }
}
n=j;
printf("array after removing %d is:",elementToRemove);
for(i=0;i<n;i++){
    printf("%d",arr[i]);
}
return 0;
}