/* sum = 1-2+3-4+5-6+7.......n
sum = (1+3+5+7.....) - (2+4+6+8...)
*/
#include<stdio.h>
int main()
{
    int number,i,even=0,odd=0,sum=0;

    printf("Enter last number : ");
    scanf("%d",&number);

    for(i=1; i<=number; i++)
    {
        if(i%2==0)
            even = even + i;
        else
            odd = odd + i;
    }
    sum = odd-even;

    printf("Sum = %d",sum);

    return 0;
}
