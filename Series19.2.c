#include<stdio.h>
int main()
{
    int i,n,result=1;
    printf("Enter any number : ");
    scanf("%d",&n);

    for(i=2; i<=n; i=i+2)
    {
        result = result * i;
    }
    printf("2 X 4 X 6 X 8.......X%d = %d",n,result);

    return 0;
}
