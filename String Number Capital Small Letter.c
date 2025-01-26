#include<stdio.h>
int main()
{
    char s[50];
    int i,capital,small,digit;

    capital=small=digit=0;

    printf("Enter a String : ");
    gets(s);

    for(i=0; s[i]!='\0'; i++)
    {
        if(s[i]>=65 && s[i]<=90)//Ascii Value for Capital letter A = 65 and Z = 90
        capital++;
        else if(s[i]>=97 && s[i]<=122)//Ascii Value for Small letter a=97 and z=120
            small++;
          else if(s[i]>=48 && s[i]<=57)//Ascii Value 0=48 and 9=57
            digit++;
    }

    printf("Number of Capital letter = %d\n",capital);
    printf("Number of Small letter = %d\n",small);
    printf("Number of Digit letter = %d\n",digit);


    getch();
}
