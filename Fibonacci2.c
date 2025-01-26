#include<stdio.h>
int main()
{
    int n,i=1,first=0,second=1,next;

    printf("Enter N : ");
    scanf("%d",&n);

     printf("Fibonacci Series : ");//Not print in loop

    while(i<=n){
        printf("%d ",first);//First time print 0
        next = first + second;//Update
        first = second;
        second=next;
        i++;
    }
     printf("\n");//For newline

    return 0;
}
