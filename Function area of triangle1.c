#include<stdio.h>
double triangleArea(double base,double height)
{
    return 0.5 * base * height;
}

int main()
{
    double b,h;
    printf("Enter base and height : ");
    scanf("%lf %lf",&b,&h);

    double area = triangleArea(b,h);
    printf("The area of triangle is : %.2lf",area);
}
