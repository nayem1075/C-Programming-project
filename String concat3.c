#include<stdio.h>
int main()
{
    char a[50] = "My name is ";
    char b[] = "Nayem Uddin";

    int i,j,length=0;

    for(i=0; a[i]!='\0'; i++)
    {
        length++;
    }
    for(j=0; b[j]!=0; j++)
    {
        a[length+j] = b[j];
    }
    printf("A = %s\n",a);

    return 0;
}
