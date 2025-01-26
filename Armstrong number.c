#include<stdio.h>
int main()
{
    int number,sum = 0,reminder,temp;

    printf("Enter any number : ");
    scanf("%d",&number);

    temp = number;
    while(temp!=0)
    {
        reminder = temp %10;
        sum = sum + reminder*reminder*reminder;
        temp = temp/10;
    }
    if (number == sum)
        printf("Armstrong number");//Example 153 to 1*1*1 + 5*5*5 + 3*3*3 = 153
    else
        printf("Not Armstrong number");//Example 155 to 1*1*1 + 5*5*5 + 5*5*5 = 251

    return 0;
}

