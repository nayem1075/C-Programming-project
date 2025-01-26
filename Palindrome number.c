#include<stdio.h>
int main()
{
    int number,temp,reminder,sum=0;

    printf("Enter any number : ");
    scanf("%d",&number);

    temp = number;
    while(temp!=0)
    {
        reminder = temp %10;
        sum = sum * 10 + reminder;
        temp = temp/10;
    }
    if(number ==  sum)
        printf("The number is palindrome");//121 to 121
    else
        printf("The number is not palindrome");//123 to 321

    return 0;
}
