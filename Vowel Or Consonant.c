/*
Enter a letter to check vowel or consonant
vowel = a,e,i,o,u
*/
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a leter : ");
    scanf("%c",&ch);

    if(ch=='a')
    printf("Vowel");
     else if(ch=='e')
    printf("Vowel");
   else if(ch=='i')
    printf("Vowel");
    else if(ch=='o')
    printf("Vowel");
    else if(ch=='u')
    printf("Vowel");

     else
    printf("Consonant");


    return 0;
}
