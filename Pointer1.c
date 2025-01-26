#include<stdio.h>
int main()
{

    int x = 10;

    int *pointer;

    pointer = &x;//Point address of X variable

    printf("Value of x = %d\n",x);//%p use kora lagbe for address print
    printf("Address of x = %p\n",&x);
    printf("Address of x = %p\n",&x);//Hexadecimal value

    printf("Value of pointer = %p\n",pointer);//address of x is value of pointer

    printf("Pointer Refer x . So value of x = %d\n",*pointer);
    printf("Adress of pointer = %p\n",&pointer);


    getch();
}
