#include<stdio.h>
int main ()
{
    float n,i,sum=0;
    printf("Enter any number : ");
    scanf("%f",&n);

    for(i=1.5; i<=n; i++)
    {
        sum = sum + i;

    }

    printf("1.5 + 2.5 + 3.5 ......+%.2f = %.2f",n,sum);

    return 0;
}
