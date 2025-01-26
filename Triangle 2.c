//Write a program that takes three length and print area
#include<stdio.h>
int main()
{
  float a,b,c,s,area;

   printf("Enter three Base = ");
   scanf("%f %f %f",&a,&b,&c);

   s = (a+b+c)/2;

   area = sqrt (s*(s-a)*(s-b)*(s-c));
    printf("Area = %.2f",area);

    return 0;
}
