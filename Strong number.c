#include<stdio.h>
int main()
{
    int number,reminder,sum=0,temp,fact,i;

    printf("Enter any number : ");
    scanf("%d",&number);

    temp = number;
    while(temp!=0)

    {
        reminder = temp % 10;

        fact=1;
        for(i=1;i<=reminder; i++)
        {
            fact = fact*i;
        }

        sum = sum + fact;
        temp = temp/10;

    }

    if(sum==number)
        printf("%d is a Strong number",number);//145=1!+4!+5!=1+24+120=145
        else
            printf("%d is not a Strong number",number);




    return 0;
}
