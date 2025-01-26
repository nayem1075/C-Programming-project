#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter N = ");
    scanf("%d",&n);


    for(row=1; row<=n; row++){
        for(col=1; col<=row; col++){
    printf("%c ",row+96);//The ascii value is 97 = 65 and a is character so use %c
        }
    printf("\n");
    }

    return 0;
}
