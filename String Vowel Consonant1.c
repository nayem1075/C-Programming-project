#include<stdio.h>
int main()
{
    char s[100],a;
    int i,vowel,consonant,digit,word,others;

    printf("Entera String : ");
    gets(s);

    i=vowel=consonant=digit=word=others=0;

    while((a=s[i])!='\0')
    {
        if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u' ||
                a=='A' || a=='E' || a=='I' || a=='O' || a=='U')
            vowel++;

        else if((a>='a' && a<='z') || (a>='A' && a<='Z'))
        consonant++;

        else if(a>='0' && a<='9')
        digit++;

        else if(a==' ')
        word++;

        else
        others++;

        i++;
}


  printf("Number of Vowel = %d\n",vowel);
  printf("Number of Consonant = %d\n",consonant);
  printf("Number of Word = %d\n",word);
  printf("Number of Digit = %d\n",digit);
  printf("Number of Others = %d\n",others);

return 0;
}
