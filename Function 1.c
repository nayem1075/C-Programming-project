#include<stdio.h>
int sum (int a, int b) //Return_type function_name (arguments)
    {
        return a+b;
    }



int main()
{
    int num1,num2;

    printf("Enter Two numbers : ");
    scanf("%d %d",&num1,&num2);

    printf("The Sum is : %d\n",sum(num1,num2));


    return 0;
}
