#include<stdio.h>
struct Person{
    char name[30];
    int id;
    float salary;
};

int main(){
    FILE *filepointer;
    struct Person person;
    filepointer=fopen("emp.rec","w");
    if(filepointer==NULL){
      printf("ther is a error in opening the file.");
      return 1;
    }
    printf("enter the person details:\n");
    printf("NMAE:\n");
    scanf("%s",&person.name);
    printf("ID:\n");
    scanf("%d",&person.id);
    printf("SALARY:\n");
    scanf("%f",&person.salary);
    fprintf(filepointer,"name is:%s",person.name);
    fprintf(filepointer,"id is:%d",person.id);
    fprintf(filepointer,"salary is :%f",person.salary);
    fclose(filepointer);
    printf("file emp.rec is successfully created.");
    return 0;
}
