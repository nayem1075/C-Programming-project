#include<stdio.h>
int main()
{
    char sentence[100],c;

    printf("Enter any sentence : ");
    gets(sentence);

     int i,vowel,consonant,word,digit,others;

    vowel=consonant=digit=word=others=0;


    for(i=0; sentence[i]!='\0'; i++)
    {
        c = sentence[i];
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' ||
        c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
            vowel++;
        else if((c>='a' && c<='z') || (c>='A' && c<='Z'))
            consonant++;
            else if(c>='0' && c<='9')
            digit++;
        else if(c==' ')
            word++;
        else
            others++;
    }

    printf("Number of Vowel = %d\n",vowel);
    printf("Number of Consonant = %d\n",consonant);
    printf("Number of digit = %d\n",digit);
    printf("Number of word = %d\n",word);
    printf("Number of others = %d\n",others);
    return 0;
}
