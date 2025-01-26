#include<stdio.h>
int main()
{
   double sum=0,n,i;
    printf("Enter any number : ");
    scanf("%lf",&n);

    for(i=1; i<=n; i++)
    {
        sum = sum + (1/i);
    }
    printf("1/1 + 1/2 + 1/3....+1/%.2lf=%.2lf",n,sum);

    return 0;
}
