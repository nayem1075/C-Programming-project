#include<stdio.h>
int main()
{
    int number,reminder,temp,sum = 0;

    printf("Enter any number : ");
    scanf("%d",&number);


    temp = number;

    while(temp !=0)
    {
        reminder = temp % 10;
        temp = temp/10;

        sum = sum + reminder;


    }

    printf("Sum of digit = %d",sum);


    return 0;
}
