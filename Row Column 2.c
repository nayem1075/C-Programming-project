#include<stdio.h>
int main ()
{
    int row,column,i,j;

    printf("Enter row and column : ");
    scanf("%d %d",&row,&column);
    for(i=1; i<=row; i++)
    {
        for(j=1;j<=column; j++)
        {
            if((i+j)%2==0){
                printf("1");
            }
        else
            printf("0");
        }
        printf("\n");
    }


    return 0;
}
