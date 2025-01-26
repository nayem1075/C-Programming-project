#include<stdio.h>
int main()
{
    int row,column,i,j;

    printf("Enter Row and Column : ");
    scanf("%d %d",&row,&column);

    for(i=1; i<= row;i++)
    {
        for(j=1; j<= column; j=j+2){
            printf("%d",j);
        }
        printf("\n");
    }

    return 0;
}


