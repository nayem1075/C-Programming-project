#include<stdio.h>
int main()
{
    double num1,num2;
    char oper;

    printf("Enter any Operator (+,-,*,/) : ");
    scanf("%c",&oper);

    printf("Enter two numbers : ");
    scanf("%lf %lf",&num1,&num2);

    switch(oper)
    {
    case '+':
        printf("%lf + %lf = %lf\n",num1,num2,num1+num2);
        break;
          case '-':
        printf("%lf - %lf = %lf\n",num1,num2,num1-num2);
        break;
          case '*':
        printf("%lf * %lf = %lf\n",num1,num2,num1*num2);
        break;
          case '/':
        printf("%lf / %lf = %lf\n",num1,num2,num1/num2);
        break;
          default:
            printf("Not a valid Operator");




    }


    getch();
}
