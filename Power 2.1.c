#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter x,y = ");
    scanf("%d %d",&x,&y);

    double result = pow(x,y);
    printf("Value = %.2lf",result);

    return 0;
}
