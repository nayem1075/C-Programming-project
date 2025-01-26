#include<stdio.h>
int main()
{
    int n,i,even=0,odd=0,sum=0;

    printf("Enter last number : ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        if(i%2==0)
            even = even + i;
        else
            odd = odd + i;
    }

    sum = odd - even;

    printf("%d - %d = %d",odd,even,sum);
    return 0;
}
