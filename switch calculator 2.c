#include<stdio.h>
int main()
{
    int number1,number2;
    char  oper;
    printf("Enter any operator (+,-,*,/) : ");
    scanf("%c",&oper);

    printf("\nEnter two number : ");
    scanf("%d %d",&number1,&number2);

    switch(oper)
    {
    case '+':
        printf("%d + %d = %d",number1,number2,number1 + number2);
        break;
    case '-':
        printf("%d - %d = %d",number1,number2,number1 - number2);
        break;
    case '*':
        printf("%d * %d = %d",number1,number2,number1 * number2);
        break;
    case '/':
        printf("%d / %d = %d",number1,number2,number1 / number2);
        break;
    default :
        printf("You entered wrong operator");

    }




    return 0;
}
