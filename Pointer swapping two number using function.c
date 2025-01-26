#include<stdio.h>

void swapping (int *pointer1,int *pointer2)
{
    int temp;

    temp = *pointer1;
    *pointer1 = *pointer2;
    *pointer2 = temp;
}
int main()
{
    int x=10,y=20;

    printf("Before swapping : \n");
    printf("\tx = %d\n",x);
    printf("\ty = %d\n",y);

    swapping(&x,&y);

    printf("\nAfter swapping : \n");
    printf("\tx = %d\n",x);
    printf("\ty = %d\n",y);

    getch();
}
