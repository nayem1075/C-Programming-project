#include<stdio.h>
int main()
{
    int x=10,y=20,temp;

    printf("Before swapping : \n");
    printf("\tx = %d\n",x);
    printf("\ty = %d\n",y);

    int *pointer1,*pointer2;

    pointer1 = &x;
    pointer2 = &y;

    //Swapping
    temp = *pointer1;
    *pointer1 = *pointer2;
    *pointer2 = temp;

    printf("\nAfter swapping : \n");
    printf("\tx = %d\n",*pointer1);
    printf("\ty = %d\n",*pointer2);


    getch();
}
