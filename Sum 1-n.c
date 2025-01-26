#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter N : ");
    scanf("%d",&n);

    for(i=1; i<=n; i++){
        sum = sum+i;
    }
    printf("Sum of 1 to  number : %d",sum);

    return 0;
}
