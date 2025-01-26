#include<stdio.h>
int main()
{

    int choice;
    float temp, ConvertedTemp;
    printf("Temperature conversation menu\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2.Fahrenheit to Celsius\n");
    printf("Enter your Choice (1 or 2) : ");
    scanf("%d",&choice);

    switch(choice)
    {
 case 1:
    printf("Enter Temperature in Celsius : ");
    scanf("%f",&temp);
    ConvertedTemp = (temp*9/5)+32;
    printf("%.2fCelsius is %.2f Fahrenheit",temp,ConvertedTemp);
    break;
    case 2:
    printf("Enter Temperature in Fahrenheit : ");
    scanf("%f",&temp);
    ConvertedTemp = (temp-32)*5/9;
    printf("%.2f Fahrenheit is %.2f Celsius",temp,ConvertedTemp);
    break;
   default:
        printf("Not a choice number please enter 1 or 2");


    }


    return 0;
}
