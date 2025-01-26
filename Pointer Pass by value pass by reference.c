#include<stdio.h>

void modifyValue(int num)
{
    num = 20;
}
int main()
{
    int num = 10;

    printf("Before Modification : %d\n",num);

    modifyValue(num);// we pass variable.So it has no change

    printf("After Modification : %d\n",num);

   return 0;
}
