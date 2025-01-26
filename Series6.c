#include<stdio.h>
int main()
{
    int n1,n2,a=1,b=3,sum=0;

    printf("Enter two number : ");
    scanf("%d %d",&n1,&n2);

    while(a<=n1 && b<=n2)
    {
        sum = sum + a*b;
        a = a+1;
        b= b+2;

    }
     printf("1.3 + 2.5 + 3.7 + .....%d.%d = %d",n1,n2,sum);


    return 0;
}
