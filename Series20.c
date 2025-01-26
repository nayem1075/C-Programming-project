#include<stdio.h>
int main()
{
    int n,i,result=1;

    printf("Enter any number : ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        result = result* i*i;

    }
       printf("1*1 X 2*2 X 3*3 X 4*4 .....X%d*%d= %d",n,n,result);


    return 0;
}
