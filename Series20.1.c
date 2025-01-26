#include<stdio.h>
int main()
{
    int n,i,result=1;
    printf("Enter any number : ");
    scanf("%d",&n);

    for(i=1; i<=n; i=i+2)
    {
        result = result* i*i;
    }

    printf("1*1 X 3*3 X 5*5......%d*%d = %d",n,n,result);

    return 0;
}
