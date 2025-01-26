#include<stdio.h>
int main()
{
    char s1[] = "Nayem Uddin";

    int i=0,length=0;

    while(s1[i]!='\0')
    {
        i++;
        length++;
    }
    printf("Length = %d\n",length);



    return 0;
}
