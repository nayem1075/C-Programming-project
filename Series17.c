#include<stdio.h>
int main()

{
    int i,n,sum=0;

    printf("Enter any number : ");
    scanf("%d",&n);

    for(i=1; i<=n; i=i+2)
    {
        sum = sum + i*i;

    }

    printf("1*1 + 3*3 + 5*5.......+ %d*%d=%d",n,n,sum);

    return 0;

}
