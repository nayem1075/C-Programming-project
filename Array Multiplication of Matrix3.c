#include<stdio.h>
int main()
{
    int r1,c1,r2,c2,i,j,k,sum=0;

    printf("Enter row and column for first matrix : ");
    scanf("%d %d",&r1,&c1);

    printf("Enter row and column for second matrix : ");
    scanf("%d %d",&r2,&c2);

    while(c1!=r2)
    {
        printf("\nColumn of first matrix is not equal row of second matrix\n");
    printf("Enter row and column for first matrix : ");
    scanf("%d %d",&r1,&c1);

    printf("Enter row and column for second matrix : ");
    scanf("%d %d",&r2,&c2);
    }

    int first[r1][c1],second[r2][c2],result[r1][c2];

   printf("Enter elements for first matrix : \n");

    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("first[%d][%d] = ",i,j);
            scanf("%d",&first[i][j]);
        }
        printf("\n");
    }

    printf("Enter elements for second matrix : \n");

    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("second[%d][%d] = ",i,j);
            scanf("%d",&second[i][j]);
        }
        printf("\n");
    }

  //Enter elements for matrix multiplication

    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            for(k=0; k<c1; k++)
            {
               sum = sum + first[i][k]*second[k][j];
            }
            result[i][j] = sum;
            sum = 0;
        }
        printf("\n");
    }

    printf("First Matrix : \n");
    for(i=0; i<r1; i++)
    {
        printf("\t");
        for(j=0; j<c1; j++)
        {
            printf("%d ",first[i][j]);
        }
        printf("\n");
    }

    printf("Second: \n");
    for(i=0; i<r2; i++)
    {
        printf("\t");
        for(j=0; j<c2; j++)
        {
            printf("%d ",second[i][j]);
        }
        printf("\n");
    }
    printf("Result Matrix : \n");
    for(i=0; i<r1; i++)
    {
        printf("\t");
        for(j=0; j<c2; j++)
        {
                 printf("%d ",result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
