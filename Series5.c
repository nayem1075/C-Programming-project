//1*2 + 2*3 + 3*4 + 4*5 +.........+ n1*n2
#include<stdio.h>
int main()
{
    int n1,n2,sum=0,a;

    printf("Enter two number : ");
    scanf("%d %d",&n1,&n2);

    for(a=1;a<=n1;a++)
    {
       sum = sum + a*(a-1);
    }
    printf("1.2 + 2.3 + 3.4 + .....%d.%d = %d",n1,n2,sum);
    return 0;
}
