#include<stdio.h>
int main()
{
    int n,row,col;

        printf("Enter N = ");
    scanf("%d",&n);

    for(row=1; row<=n; row++){
        for(col=1; col<=row; col++){
            printf("%d",row%2);//we see this program even is 0 and odd is 0
        }
    printf("\n");
    }

    return 0;
}
