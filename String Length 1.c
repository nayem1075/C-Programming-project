#include<stdio.h>
int main()
{
    char s1[100];

    printf("Enter your sentence : ");
    gets(s1);

    int length = strlen(s1);

    printf("Length = %d\n",length);




    return 0;
}
