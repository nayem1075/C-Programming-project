#include<stdio.h>
int main()
{
    int i,n,sum = 0;
    printf("Enter any number : ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        sum = sum + i*i;
    }

    printf("1*1 + 2*2 + 3*3 + 4*4.....+%d*%d=%d",n,n,sum);
    return 0;
}
