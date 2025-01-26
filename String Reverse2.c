#include<stdio.h>
int main()
{
    char a[100];

    printf("Enter a sentences for a : ");
    gets(a);

    strrev(a);

    printf("A = %s\n",a);



    return 0;
}
