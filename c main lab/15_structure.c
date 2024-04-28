#include<stdio.h>
struct student {
    int id;
    char name[30];
    int mark1,mark2,mark3;
    int totalMark;


};
int main(){
    const int count=3;
    
struct student students[count];
for(int i=0;i<count;++i){
 printf("enter the student details of student %d\n",i+1);
 printf("NAME:");
 scanf("%s",&students[i].name);
 printf("ID:");
 scanf("%d",&students[i].id);
 printf("mark1:");
 scanf("%d",&students[i].mark1);
 printf("mark2:");
 scanf("%d",&students[i].mark2);
printf("mark3:");
  scanf("%d",&students[i].mark3);
  students[i].totalMark=students[i].mark1+students[i].mark2+students[i].mark3;
  
}

printf("\n");

printf("result table:");
printf("------------------------------------------------\n");
printf("student name\t student id\t mark1\t mark2\t mark3\t total Marks\n");
for(int i=0;i<count;++i){
  printf("%s\t\t %d\t\t %d\t\t %d\t\t %d\t\t %d\t\t\n",students[i].name,students[i].id,students[i].mark1,students[i].mark2,students[i].mark3,students[i].totalMark);


}
printf("------------------------------------------------\n");
int highestTotalIndex=0;
for(int i=1;i<count;i++){
if(students[i].totalMark>students[highestTotalIndex].totalMark){
    highestTotalIndex=i;
}}
printf("student with highest mark:\n");
printf("Name:%s",students[highestTotalIndex].name);
printf("ID:%d",students[highestTotalIndex].id);
printf("TOTAL MARKS:%d",students[highestTotalIndex].totalMark);
return 0;
}