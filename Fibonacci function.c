#include<stdio.h>
void fibonacci(int n)
{
    int first,second,next;
    first=0;
    second=1;
    for(int i=0; i<n; i++)
    {
        printf("%d ",first);
        next=first+second;
        first=second;
        second=next;
    }
}
int main()
{
    int number;
    printf("Enter last number of series : ");
    scanf("%d",&number);

    printf("Fibonacci Series : ");
    fibonacci(number);

}

