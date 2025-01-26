#include<stdio.h>
int main()
{
    int num1,num2,num3;

    printf("Input num1 : ");
    scanf("%d",&num1);


    printf("Input num2 : ");
    scanf("%d",&num2);

    num3 = num1;
    num1 = num2;
    num2 = num3;

    printf("num1 = %d\n",num1);
     printf("num2 = %d\n",num2);
    return 0;
}
