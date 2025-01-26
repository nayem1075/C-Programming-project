#include<stdio.h>
int main()
{
    int n,i,result=1;
    printf("Enter any number : ");
    scanf("%d",&n);

    for(i=2; i<=n; i=i+2)
    {
        result = result* i*i;
    }

    printf("2*2 X 4*4 X 6*6......%d*%d = %d",n,n,result);

    return 0;
}
