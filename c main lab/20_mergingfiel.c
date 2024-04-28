#include<stdio.h>
int main(){
    FILE *file1,*file2,*mergedFile;
    file1=fopen("file1.txt","r");
    if (file1==NULL)
    {
        printf("error in opening 'file1.txt' ");
        return 1;
    }
    file2=fopen("file2.txt","r");
    if(file2 == NULL){
        printf("error in opening the file 'file2.txt'");
        fclose(file1);
        return 1;
    }
    mergedFile=fopen("mergedFile.txt","w");
    if(mergedFile==NULL){
        printf("ERROR IUN OPENING THE FILEN'mergedFile.txt");
        fclose(file1);
        fclose(file2);
        return 1;
    }
    char ch;
    if((ch=fgetc(file1))!=EOF){
        fputc(ch,file1);
    }
    if((ch=fgetc(file2))!=EOF){
        fputc(ch,file2);
    }
    if((ch=getc(mergedFile))!=EOF){
        fputc(ch,mergedFile);
    }
    fclose(file1);
    fclose(file2);
    fclose(mergedFile);
    printf("file merged successfullly.");
    return 0;
}