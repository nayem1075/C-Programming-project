#include<stdio.h>
#include<math.h>
int main()
{
    double x;
    printf("Enter x = ");
    scanf("%lf",&x);

    double result = floor(x);
    printf("floor(%lf) = %lf\n",x,result);//-1.5 = 2

    return 0;
}

