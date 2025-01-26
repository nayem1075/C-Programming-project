#include<stdio.h>
int main()
{
    int number1,number2;
    char oper;

    printf("Enter any operator (+,-,*,/) : ");
    scanf("%c",&oper);
    printf("Enter two number : ");
    scanf("%d %d",&number1,&number2);

    switch(oper)
    {
    case '+':
        printf("%d + %d = %d\n",number1,number2,number1+number2);
        break;
   case '-':
        printf("%d - %d = %d\n",number1,number2,number1-number2);
        break;
    case '*':
        printf("%d * %d = %d\n",number1,number2,number1*number2);
        break;
    case '/':
        printf("%d / %d = %d\n",number1,number2,number1/number2);
        break;
        default:
        printf("Not a valid operator");
    }



    getch();
}
