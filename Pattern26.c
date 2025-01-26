#include<stdio.h>
int main()
{
    int n,row,column;
    printf("Enter N : ");
    scanf("%d",&n);

    for(row=1; row<=n; row++)
    {
        for(column=1; column<=row; column++)
        {
            printf("%c ",column+64);
        }
        printf("\n");
    }

    for(row=n-1; row>=1; row--)
    {
        for(column=1; column<=row; column++)
        {
            printf("%c ",column+64);
        }
        printf("\n");
    }



    return 0;
}
