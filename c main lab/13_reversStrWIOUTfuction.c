#include<stdio.h>
int main(){
    char mystring[10],i,temp;
   int lenght=0;
   printf("enter the string:\n");
   scanf("%s",&mystring);
   while (mystring[lenght]!='\0')
   {
    lenght++;
   }
   for(i=0;i<lenght/2;i++){
    temp=mystring[i];
    mystring[i]=mystring[lenght-i-1];
 mystring[lenght-i-1]=temp;
   }
   printf("reversed string is:%s",mystring);
   return 0;
}