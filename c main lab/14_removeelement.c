#include<stdio.h>
int main(){
    int arr[]={4,3,4,4,5,6,4,9,4,3,4,4,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int elementToremove=4;
    
    printf("original array is:\n");
    for(int i=0;i<n;i++){
      printf("%d",arr[i]);
    }
    printf("\n");

    int i,j;
    j=0;
for(i=0;i<n;i++){
    if(arr[i]!=elementToremove){
        arr[j]=arr[i];
        j++;
    }
}
 n=j;

 printf("array after removing elemnt:\n ");
 for(i=0;i<n;i++){
    printf("%d",arr[i]);
 }   
 return 0;
}