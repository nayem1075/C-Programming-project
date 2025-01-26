#include<stdio.h>

void modifyValue(int *pointer)
{
    *pointer = 20;
}

int main()
{
    int num = 10;

    printf("Before modification : %d\n",num);

    modifyValue(&num);// we pass address then its change

    printf("After modification : %d\n",num);


    return 0;
}
