#include<stdio.h>
int main()
{
    char s1[100],s2[100],temp[100];

    printf("Enter S1 : ");
    gets(s1);
    printf("Enter S2 : ");
    gets(s2);

    printf("\n\nBefore Swapping\n");
    printf("S1 = %s\n",s1);
    printf("S2 = %s\n",s2);


    strcpy(temp,s1);
    strcpy(s1,s2);
    strcpy(s2,temp);

    printf("\n\nAfter Swapping\n");

    printf("S1 = %s\n",s1);
    printf("S2 = %s\n",s2);

    return 0;
}
