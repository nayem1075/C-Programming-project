#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter N = ");
    scanf("%d",&n);


    for(row=1; row<=n; row++){
        for(col=1; col<=row; col++){
        printf("%c ",row+64);//The ascii value is A = 65 and A is character so use %c
        }
    printf("\n");
    }

    return 0;
}
