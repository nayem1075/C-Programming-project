#include<stdio.h>
int main()
{
    int number1,number2,n1,n2,reminder,GCD,LCM;

    printf("Enter two numbers : ");
    scanf("%d %d",&number1,&number2);


    n1 = number1;
    n2 = number2;

    while(n2!=0)
    {
        reminder = n1 % n2;
        n1 = n2;
        n2 = reminder;

    }
    GCD = n1;
    LCM = (number1 * number2)/GCD;

    printf("GCD = %d\n",GCD);
    printf("LCM = %d\n",LCM);

    return 0;
}
