#include<stdio.h>
int main()
{
    int x;
    printf("Enter any number : ");
    scanf("%d",&x);

    double result = sqrt(x);
     printf("Value = %.2lf",result);
    return 0;
}
