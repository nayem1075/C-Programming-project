#include<stdio.h>
int main()
{
        int number,temp,sum=0,reminder,fact,i;

        printf("Enter any number : ");
        scanf("%d",&number);

        temp = number;

        while(temp!=0)
        {
            reminder = temp % 10;

            fact = 1;

            for(i=1; i<=reminder; i++)
            {
                fact = fact * i;
            }
            sum = sum + fact;
            temp = temp/10;

        }
        if(sum==number)
            printf("%d is a Strong number\n",number);
        else
            printf("%d is not  a Strong number\n",number);


    return 0;
}
