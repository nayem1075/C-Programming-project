#include<stdio.h>
int main()
{

    int n,i,sum = 0;

    printf("Enter n = ");
    scanf("%d",&n);

    for(i=2; i<=n; i=i+2)
    {
        sum = sum+i;
    }
       printf("2+4+6+.......%d=%d",n,sum);
    return 0;
}
