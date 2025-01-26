#include<stdio.h>
#include<math.h>
int main()
{
    double x;
    printf("Enter x = ");
    scanf("%lf",&x);

    double result = cos(x);
    printf("cos(%lf) = %lf",x,result);

    return 0;
}
