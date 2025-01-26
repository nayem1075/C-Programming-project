#include<stdio.h>
int main()
{
    int n1,n2,n3,sum=0,a=1,b=3,c=5;
    printf("Enter three numbers : ");
    scanf("%d %d %d",&n1,&n2,&n3);

    while(a<=n1 && b<=n2 && c<=n3)

{
    sum = sum + a*b*c;
    a= a+2;
    b= b+2;
    c= c+2;

}
printf("1.3.5 + 3.5.7 + 5.7.9 + ......%d.%d.%d = %d",n1,n2,n3,sum);

return 0;
}
