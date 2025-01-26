#include<stdio.h>
int main()
{
    int choice;
    float temp,convertedtemp;

    printf("Temperature conversation menu\n");
    printf("1.Celsius to Fahrenheit\n");
    printf("2.Fahrenheit to Celsius\n");
    printf("3.Celsius to Kelvin\n");
    printf("4.Kelvin to Celsius\n");
    printf("5.Fahrenheit to Kelvin\n");
    printf("6.Kelvin to Fahrenheit\n");
    printf("Enter your choice 1 to 6 : ");
    scanf("%d",&choice);

    switch(choice)
    {
  case 1:
    printf("Enter temperature in Celsius : ");
    scanf("%f",&temp);
    convertedtemp = (temp * 9/5)+32;
    printf("%.2f Celsius is %.2f Fahrenheit",temp,convertedtemp);
    break;

     case 2:
    printf("Enter temperature in Fahrenheit : ");
    scanf("%f",&temp);
    convertedtemp = (temp - 32)*5/9;
    printf("%.2f Fahrenheit is %.2f Celsius",temp,convertedtemp);
     break;

     case 3:
    printf("Enter temperature in Celsius : ");
    scanf("%f",&temp);
    convertedtemp = temp + 273.15;
    printf("%.2f Celsius is %.2f Kelvin\n",temp,convertedtemp);
     break;

       case 4:
    printf("Enter temperature in Kelvin : ");
    scanf("%f",&temp);
    convertedtemp = temp - 273.15;
    printf("%.2f Kelvin is %.2f Celsius\n",temp,convertedtemp);
     break;

       case 5:
        printf("Enter temperature in Fahrenheit : ");
        scanf("%f",&temp);
        convertedtemp = (temp - 32 * 5/9)+ 273.15;
        printf("%.2f Fahrenheit is %.2f Kelvin",temp,convertedtemp);
         break;

               case 6:
        printf("Enter temperature in Kelvin : ");
        scanf("%f",&temp);
        convertedtemp = ((temp - 273.15)*9/5)+32;
        printf("%.2f Kelvin is %.2f Fahrenheit",temp,convertedtemp);
         break;

        default :
        printf("Not a choice number. Please enter 1 to 6");


    }

   getch();
}
