#include<stdio.h>
int main()
{
    int i,j,row,column,count=1;
    printf("Enter row and column : ");
    scanf("%d %d",&row,&column);

    for(i=1; i<=row; i++){
        for(j=1; j<=column; j++){
            printf("%d ",count);
            count++;
        }
        printf("\n");
    }



    return 0;
}
