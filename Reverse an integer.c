#include<stdio.h>
int main()
{
    int number,reminder,temp,sum=0;

    printf("Enter any number : ");
    scanf("%d",&number);


    temp = number;

    while(temp!=0)
    {
        reminder = temp % 10;
        sum = sum *10 + reminder;
        temp = temp /10;


    }

    printf("Reverse of digit = %d",sum);//123 to 321

    return 0;
}
