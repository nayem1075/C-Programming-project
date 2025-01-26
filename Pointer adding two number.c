#include<stdio.h>
int main()
{
    int x=10,y=20,sum;

    int *pointer1,*pointer2;

    pointer1 = &x;
    pointer2 = &y;

    sum = *pointer1 + *pointer2;

    printf("Sum of x and y = %d\n",sum);

    int p=30,q=20,sub;

    int *pointer3,*pointer4;

    pointer3 = &p;
    pointer4 = &q;

    sub = *pointer3 - *pointer4;

    printf("x-y = %d\n",sub);

    getch();
}
