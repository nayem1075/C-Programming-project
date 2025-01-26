#include<stdio.h>
int main()
{

    int n,i,sum = 0;

    printf("Enter n = ");
    scanf("%d",&n);

    for(i=1; i<=n; i=i+3)
    {
        sum = sum+i;
    }
       printf("1+4+7+.......%d=%d",n,sum);
    return 0;
}
