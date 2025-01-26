#include<stdio.h>
void totalSum(int n)
{
    int sum = 0;
    for(int i=1; i<=n; i++)
    {
        sum = sum + i;
    }
    printf("Sum = %d",sum);
}
int main()
{
    int number;
    printf("Enter last number of series : ");
    scanf("%d",&number);

    totalSum(number);
}

