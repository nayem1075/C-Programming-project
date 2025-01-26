#include<stdio.h>
int main()
{
    char ch[] = "Nayem Uddin";
    char *pointer;

    pointer = &ch[0];

    for(int i=0; ch[i]!='\0'; i++)
    {
        printf("%c\n",*pointer);
        pointer++;
    }

    getch();
}
