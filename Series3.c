#include<stdio.h>
int main()
{
    int n,sum=0,a=1;

    printf("Enter any number : ");
    scanf("%d",&n);

    while(a<=n)
    {
        sum = sum + a;
        a=a+2;
    }



    printf("1 + 3 + 5 + .....+ %d = %d",n,sum);
    return 0;
}
