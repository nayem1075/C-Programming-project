//1 + 2 + 3 + 4 +........+N = ?
#include<stdio.h>
int main()
{
    int n,sum=0,i;
    printf("Enter the last number : ");
    scanf("%d",&n);
    printf("1 + 2 + 3 + ..... + %d",n);

    for(i=1; i<=n; i=i+1)
{
      sum = sum + i;
}
    printf(" = %d",sum);

    return 0;
}
