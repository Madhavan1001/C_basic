#include<stdio.h>
int main(){
    int rows,columns,i,j;
    printf("ente the no. of rows:");
    scanf("%d",&rows);
    printf("enter thr=e no. of columns:");
    scanf("%d",&columns);
    int A[rows][columns],B[rows][columns],C[rows][columns];
    printf("enter theelments for ,atric=x A:");
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++){
  scanf("%d",&A[i][j]);
        }
    }
    printf("enter the elments for matrix B:");
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++){
            scanf("%d",&B[i][j]);
        }
    }

    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++){
            C[i][j]=A[i][j]+B[i][j];
        }
    }
    printf("adition matrix:\n");
    for(i=0;i<rows;i++){
        for(j=0;j<columns;j++){
            printf("%d\t",C[i][j]);
        }
        printf("\n");
    }
    return 0;
}