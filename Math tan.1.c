#include<stdio.h>
#include<math.h>
int main()
{
    double x;
    printf("Enter x = ");
    scanf("%lf",&x);

    double result = tan(x);
    printf("tan(%lf) = %lf",x,result);
    return 0;
}
