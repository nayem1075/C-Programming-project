#include<stdio.h>
int main()
{
   char a1[100];
   char a2[100];


   printf("a1 = ");
   gets(a1);

   strcpy(a2,a1);

   printf("a2 = %s\n",a2);

    return 0;
}
