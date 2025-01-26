#include<stdio.h>
int main()
{
    int A[10][10],B[10][10],C[10][10];
    int row,column,i,j;

    printf("Enter row and column : ");
    scanf("%d %d",&row,&column);

    printf("Enter elements of A matrix . \n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<column; j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }

     printf("Enter elements of B matrix . \n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<column; j++)
        {
            printf("B[%d][%d] = ",i,j);
            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }
    printf("A = ");
    for(i=0; i<row; i++)
    {
        printf("\t");
        for(j=0; j<column; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    printf("\nB = ");
    for(i=0; i<row; i++)
    {
        printf("\t");
        for(j=0; j<column; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    for(i=0; i<row; i++)
    {
        for(j=0; j<column; j++)
        {
            C[i][j] = A[i][j] - B[i][j];
        }
    }
      printf("\nA - B = ");
    for(i=0; i<row; i++)
    {

        for(j=0; j<column; j++)
        {
            printf("%d ",C[i][j]);
        }
        printf("\n");
        printf("\t");
    }

    return 0;
}

