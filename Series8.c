#include<stdio.h>
int main()
{
    int i,n,sum=0;

    printf("Enter any number : ");
    scanf("%d",&n);

    for(i=2;i<=n;i=i+2)
    {
        sum = sum+i;
    }

    printf("2+4+6+8+........%d = %d",n,sum);

    return 0;
}
