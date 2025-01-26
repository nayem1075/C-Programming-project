#include<stdio.h>

double triangleArea(double a,double b)
{
    return 0.5 * a * b;
}

int main()
{
    double base,height;
    printf("Enter base and height : ");
    scanf("%lf %lf",&base,&height);

    double area = triangleArea(base,height);

    printf("The area of triangle is : %.2lf\n",area);
}
