#include<stdio.h>
int main()
{
    int n1,n2,n3,a=1,b=2,c=3,sum=0;

    printf("Enter three number : ");
    scanf("%d %d %d",&n1,&n2,&n3);

    while(a<=n1 && b<=n2 && c<=n3)
    {
        sum = sum + a*b*c;
        a = a+1;
        b = b+1;
        c = c+1;

    }
     printf("1.2.3 + 2.3.4 + 3.4.5 + .....%d.%d.%d = %d",n1,n2,n3,sum);


    return 0;
}

