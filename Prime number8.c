#include<stdio.h>
int main()
{
    int number,i,count=0,startingnumber,endingnumber;

    printf("Enter starting number : ");
    scanf("%d",&startingnumber);

    printf("Enter ending number : ");
    scanf("%d",&endingnumber);

    for(number=startingnumber; number<=endingnumber; number++)
    {
        count=0;
        if(number<=1)
        {
            count=1;
        }
        else
        {
            for(i=2; i<=number/2; i++)
            {
                if(number%i==0)
                {
                    count=1;
                    break;
                }
            }
        }
        if(count==0)
        {
            printf("%d,",number);
        }
    }



    return 0;
}
