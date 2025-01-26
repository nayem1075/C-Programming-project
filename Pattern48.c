#include<stdio.h>
int main()
{
    int n,row,column;
    printf("Enter N : ");
    scanf("%d",&n);

    for(row=n; row>=1; row--)
    {
        for(column=1; column<=n-row; column++)
        {
            printf(" ");
        }
        for(column=1; column<=row; column++)
        {
            printf("%c",row+64);
        }
        printf("\n");
    }




    return 0;
}

