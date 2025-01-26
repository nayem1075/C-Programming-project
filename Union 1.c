#include<stdio.h>

union test1//memory size 8 bytes for double data types
{
   int x,y;
   double z;
};

union test2//memory size 4 bytes for int data types
{
    char ch;
    int x;
};

union test3//memory size 24 bytes for char name[20] and plus 4 for align double data types
{
    char name[20];
    double d;
};
struct test4//memory size 12 bytes...4+4+1 and 3 padding sum of all data types
{
    int x;
    int y;
    char ch;
};
int main()
{
    union test1 t1;
    union test2 t2;
    union test3 t3;
    struct test4 t4;

    printf("sizeof (test1) = %d\n",sizeof(t1));
    printf("sizeof (test2) = %d\n",sizeof(t2));
    printf("sizeof (test3) = %d\n",sizeof(t3));
    printf("sizeof (test4) = %d\n",sizeof(t4));

    getch();
}
