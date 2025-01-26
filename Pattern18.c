#include<stdio.h>
int main()
{
    int n,row,column;
    printf("Enter N : ");
    scanf("%d",&n);

    for(row=n; row>=1; row--)
{
    for(column=1; column<=row; column++){
        printf("%c ",column+96);//The ascii value is a = 96 and a is character so use %c
    }
    printf("\n");
}

    return 0;
}

