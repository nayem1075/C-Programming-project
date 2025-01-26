#include<stdio.h>
int main()
{
    int choice;
    float t,convert;
    printf("Temperature conversation menu\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter your choice(1 or 2) : ");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        printf("Enter temperature in Celsius : ");
        scanf("%f",&t);
        convert = (1.8*t + 32);
        printf("%.2f",convert);
        break;

   case 2:
        printf("Enter temperature in Fahrenheit : ");
        scanf("%f",&t);
        convert = (t - 32)*5/9;
        printf("%.2f",convert);
        break;
   default:
    printf("Please choice 1 or 2");

    }



    getch();
}
