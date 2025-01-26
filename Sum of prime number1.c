#include<stdio.h>
#include<math.h>
int main()
{
    int number,i,count=0,startingnumber,endingnumber,
    totalprimenumbers=0,sumofprimenumbers=0;

    printf("Enter starting number : ");
    scanf("%d",&startingnumber);

    printf("Enter ending number : ");
    scanf("%d",&endingnumber);

    for(number=startingnumber; number<=endingnumber; number++){
        count =0;
        if(number<=1){
            count=1;
        }else{
        for(i=2; i<=sqrt(number); i=i+2){
            if(number%i==0){
                count=1;
                break;
            }
        }
    }
   if(count==0){
    printf("%d, ",number);
    totalprimenumbers++;
    sumofprimenumbers = sumofprimenumbers + number;
   }
}
    printf("\nTotal prime number : %d\n",totalprimenumbers);
     printf("Sum of prime number : %d\n",sumofprimenumbers);

    return 0;
}
