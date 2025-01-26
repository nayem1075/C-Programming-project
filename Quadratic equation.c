/*
 a*x*x + b*x +c = 0
x1 = (-b + sqrt(b*b - 4*a*c))/(2*a)
x2 = (-b - sqrt(b*b - 4*a*c))/(2*a)
d = sqrt(b*b - 4*a*c)
*/
#include<stdio.h>
int main()
{
    double a,b,c,d,x1,x2;
    printf("Enter a b c : ");
    scanf("%lf %lf %lf",&a,&b,&c);

    d = sqrt(b*b - 4*a*c);

    x1 = (-b + d)/(2*a);
    x2 = (-b - d)/(2*a);

    printf("x1 = %lf\n",x1);
    printf("x2 = %lf\n",x2);


  return 0;
}
