#include<stdio.h>
int main()
{
    int n,i,result=1;
    printf("Enter any number : ");
    scanf("%d",&n);

    for(i=1; i<=n; i=i+2)
    {
        result = result * i;
    }
    printf("1 X 3 X 5 X 7........X%d = %d",n,result);

    return 0;
}

