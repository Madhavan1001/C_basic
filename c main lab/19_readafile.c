#include<stdio.h>
int main(){
    FILE *filePointer;
    filePointer=fopen("emp.rec","r");
    if(filePointer==NULL){
        printf("error in opeing the file.");
        return 1;
    }
    printf("content of the file emp.rec:\n");
    char ch;
    if((ch=fgetc(filePointer))!=EOF){
        printf("%c",ch);
    }
    fclose(filePointer);
    return 0;
}