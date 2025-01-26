#include<stdio.h>
int main()
{
    int a[5] = {10,20,30,40,50};

    int *pointer;

    pointer = &a[0];

    for(int i=0; i<5; i++)
    {
      printf("%d\n",*pointer);
      pointer++;
    }

    getch();
}
