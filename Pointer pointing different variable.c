#include<stdio.h>
int main()
{
   int x=10,y=20,z=30;

   int *pointer;//if i point integer types value then pointer also integer type

   //print use pointer
   pointer = &x;//pointer point x variable
   printf("x = %d\n",*pointer);

   pointer = &y;//pointer point y variable
   printf("y = %d\n",*pointer);

   pointer = &z;//pointer point z variable
   printf("z = %d\n",*pointer);

   getch();
}
