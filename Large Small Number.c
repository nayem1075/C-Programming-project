#include<stdio.h>
int main()
{
    int p,q;
    printf("Enter 2 numbers : ");
    scanf("%d %d",&p,&q);

    if(p>q)
        printf("Small number = %d\n",q);
    else if(p<q)
    printf("Small number = %d\n",p);
    else
        printf("Numbers are equal");
    return 0;
}
