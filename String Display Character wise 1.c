#include<stdio.h>
int main()
{
    char name[] = "Nayem";

    for(int i=0; name[i]!='\0'; i++)
    {
        printf("%c\n",name[i]);
    }

    return 0;
}
