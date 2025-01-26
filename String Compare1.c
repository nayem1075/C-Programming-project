#include<stdio.h>
int main()
{
    char a[100],b[100];

    printf("Enter the sentences of a : ");
    gets(a);

    printf("Enter the sentences of b : ");
    gets(b);

    int c = strcmp(a,b);

    if(c==0)
    {
        printf("Strings are equal");
    }
    else
        printf("Strings are not equal");

    return 0;
}
