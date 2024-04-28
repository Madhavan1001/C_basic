#include<stdio.h>
int main(){
    int A[10][10],B[10][10],SUM[10][10],limit,i,j;
    printf("entee=r the array limit:\n");
    scanf("%d",&limit);
    printf("enter the elements for matrix A:\n");
    for(i=0;i<limit;i++){
        for(j=0;j<limit;j++){
            scanf("%d",&A[i][j]);
        }
    }
    printf("enter the elements for matrix B\n");
    for(i=0;i<limit;i++){
        for(j=0;j<limit;j++){
        scanf("%d",&B[i][j]);
        }
    }

    for(i=0;i<limit;i++){
      for(j=0;j<limit;j++){
        SUM[i][j]=A[i][j]+B[i][j];
      }
        
    }
    printf("The addition matrix is:\n");
    for(i=0;i<limit;i++){
        for(j=0;j<limit;j++){
            printf("%d ",SUM[i][j]);
        }
printf("\n");
    }
}