#include<stdio.h>
int main()
{
    int N,i,sum = 0;

    printf("Enter any number : ");
    scanf("%d",&N);

    for(i=1; i<=N; i=i+2)
    {
        sum = sum + i;
    }

    printf("1 + 3 + 5 + ...+ %d = %d",N,sum);


    return 0;
}
