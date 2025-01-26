#include<stdio.h>
int main()
{
    int n,row,column;
    printf("Enter N : ");
    scanf("%d",&n);


    for(row=1; row<=n; row++)
    {
        for(column=1; column<=n-row; column++)
        {
            printf("  ");
        }
        for(column=1; column<=2*row-1; column++)
        {
            printf("%d ",column%2);
        }
        printf("\n");
    }
     for(row=n-1; row>=1; row--)
    {
        for(column=1; column<=n-row; column++)
        {
            printf("  ");
        }
        for(column=1; column<=2*row-1; column++)
        {
            printf("%d ",column%2);
        }
        printf("\n");
    }



    return 0;
}



