#include<stdio.h>
#include<math.h>
int main()
{
    double x;
    printf("Enter x = ");
    scanf("%lf",&x);

    double result = log10(x);
    printf("log(%lf) = %lf",x,result);

    return 0;
}
