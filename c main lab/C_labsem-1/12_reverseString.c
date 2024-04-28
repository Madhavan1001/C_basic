#include<stdio.h>
int main(){
    char myString[50],temp;
    printf("enter a string:");
    scanf("%s",myString);
    int lenght=0;
while(myString[lenght]!='\0'){
    lenght++;
}
for(int i=0;i<lenght/2;i++){
     temp=myString[i];
     myString[i]=myString[lenght-i-1];
     myString[lenght-i-1]=temp;
}
  printf("reversed string = %s",myString);
  return 0;  
}