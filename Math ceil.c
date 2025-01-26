#include<stdio.h>
#include<math.h>
int main()
{
    double x;
    printf("Enter x = ");
    scanf("%lf",&x);

    double result = ceil(x);
    printf("ceil(%lf) = %lf\n",x,result);//-6.5 = -6

    return 0;
}

