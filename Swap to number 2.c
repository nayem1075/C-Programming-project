#include<stdio.h>
int main()
{
  int p,q,r;

  printf("Input p : ");
  scanf("%d",&p);

   printf("Input q : ");
  scanf("%d",&q);

  r=p;
  p=q;
  q=r;

  printf("p = %d\n",p);
  printf("q = %d",q);
    return 0;
}
