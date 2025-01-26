#include<stdio.h>
int main()
{
    char s1[] = "Nayem Uddin";
    char s2[] = "Nayem Uddin";

    int d = strcmp(s1,s2);

    if(d==0)
    {
        printf("Strings are equal");
    }
    else
    printf("Strings are not equal");

    return 0;
}
