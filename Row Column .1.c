#include<stdio.h>
int main()
{
    int row,column,i,j;

    printf("Enter Row and Column : ");
    scanf("%d %d",&row,&column);

    for(i=1; i<= row; i=i+2)
    {
        for(j=1; j<= column; j++){
            printf("%d",i);
        }
        printf("\n");
    }

    return 0;
}


