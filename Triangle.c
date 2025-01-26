//Write a program that calculates area of a triangle
#include<stdio.h>
int main()
{
    float base, height,area;
    printf("Base = ");
    scanf("%f",&base);

    printf("Height = ");
    scanf("%f",&height);
    area = (float)1/2 * base * height;//Or write 0.5

    printf("Area = %.2f",area);

    return 0;
}
