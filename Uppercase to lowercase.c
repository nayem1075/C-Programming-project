#include<stdio.h>
int main()
{
    char upper;
    printf("Enter any uppercase letter = ");
    scanf("%C",&upper);

    printf("The lowercase letter = %c",upper+32);
    getch();
}
