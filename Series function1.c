#include<stdio.h>
int totalSum(int n)
{
    int sum = 0;
    for(int i=1; i<=n; i++)
    {
        sum = sum + i;
    }
    return sum;
}
int main()
{
    int number;
    printf("Enter last number of series : ");
    scanf("%d",&number);

    printf("Sum = %d\n",totalSum(number));
}

