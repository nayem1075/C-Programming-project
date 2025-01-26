#include<stdio.h>
#include<math.h>
int main()
{
    double x;
    printf("Enter x = ");
    scanf("%lf",&x);

    double result = round(x);
   printf("round(%lf) = %lf\n",x,result);

    return 0;
}

