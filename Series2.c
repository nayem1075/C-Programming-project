#include<stdio.h>
int main()
{
    int n,sum=0,a=1;

    printf("Enter any number : ");
    scanf("%d",&n);

    while(a<=n)
    {
        sum = sum + a;
        a=a+1;
    }



    printf("1 + 2 + 3 + .....+ %d = %d",n,sum);
    return 0;
}
