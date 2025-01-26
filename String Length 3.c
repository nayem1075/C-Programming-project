#include<stdio.h>
int main()
{
    char name[100];
    int i=0,length=0;

    printf("Enter any sntences : ");
    gets(name);

    for(i=0; name[i]!='\0'; i++)
    {
        length++;
    }
    printf("Length = %d\n",length);


    return 0;
}


