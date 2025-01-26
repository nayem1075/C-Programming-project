#include<stdio.h>
int main()
{
    int n,row,column;

    printf("Enter N : ");
    scanf("%d",&n);

    for(row=1; row<=n; row++)
    {
        for(column=1; column<=n-row; column++)//for print space
        {
            printf(" ");
        }
         for(column=1; column<=row; column++)//for print number

        {
            printf("%d",column);
        }
        printf("\n");
    }


    return 0;
}
