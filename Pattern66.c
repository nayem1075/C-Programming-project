#include<stdio.h>
int main()
{
    int n,row,column;
    printf("Enter N : ");
    scanf("%d",&n);

    for(row=1; row<=n; row++)
    {
        for(column=1; column<=n; column++)
        {
            printf("%c",row+64);
        }
        printf("\n");
    }




    return 0;
}


