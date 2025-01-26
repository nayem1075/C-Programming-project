
#include<stdio.h>
int main()
{
    int n1,n2,sum=0,a=2,b=4;

    printf("Enter two number : ");
    scanf("%d %d",&n1,&n2);

    while(a<=n1 && b<=n2)
    {
       sum = sum + a*b;
       a= a + 2;
       b= b + 2;
    }
    printf("2.4 + 4.6 + 6.8 +......%d.%d=%d",n1,n2,sum);


    return 0;
}
