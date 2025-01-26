#include<stdio.h>

int main()
{
    typedef char LETTER;//type definition

    LETTER ch1;

    ch1 = 'A';

    printf("ch1 = %c\n",ch1);

    LETTER ch2 = 'B';

    printf("ch2 = %c\n",ch2);

    getch();
}
