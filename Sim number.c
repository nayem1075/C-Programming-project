#include<stdio.h>
int main()
{
    int number;

    printf("Enter any number : ");
    scanf("%d",&number);

    if(number>=1800000000 && number<=1899999999)
        printf("Robi\n");
    else if(number>=1600000000 && number<=1699999999)
        printf("Airtel\n");
    else if(number>=1500000000 && number<=1599999999)
        printf("Teletalk\n");
    else if(number>=1900000000 && number<=19999999999)
        printf("Banglalink\n");
    else if(number>=1700000000 && number<=1799999999)
        printf("Grameenphone\n");
    else
      printf("Not a sim number");

    return 0;
}
