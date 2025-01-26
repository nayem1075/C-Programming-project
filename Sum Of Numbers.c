#include<stdio.h>
int main()
{
    int n,i,sum=0,total;

    printf("Enter n = ");
    scanf("%d",&n);

    for(i=1; i<=n; i=i+2)
    {
        printf("%d ",i);
       sum = sum  + i;
       total++;
    }


     printf("\nSum of total = %d\n",sum);
     printf("Total = %d",total);
    return 0;
}
