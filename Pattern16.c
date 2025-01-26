#include<stdio.h>
int main()
{
    int n,row,column;
    printf("Enter N : ");
    scanf("%d",&n);

    for(row=n; row>=1; row--){
        for(column=1; column<=row; column++){
            printf("%c ",column+64);//The ascii value is A = 65 and A is character so use %c
        }
        printf("\n");
    }



    return 0;
}
