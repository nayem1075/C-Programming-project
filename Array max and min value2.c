#include<stdio.h>
int main()
{
    int row ,i,max,min;

    printf("Enter how many number you enter : ");
    scanf("%d",&row);

    int number[row];

    printf("\nEnter elements : ");
    for(i=0; i<row; i++)
    {
        scanf("%d",&number[i]);
    }

     max = number[0];
     min = number[0];

    for(i=0; i<row; i++)
    {
        if(max < number[i])
            max = number[i];
    }

    for(i=0; i<row; i++)
    {
        if(min > number[i])
            min = number[i];
    }

    printf("Maximum number is %d\n",max);
    printf("Minimum number is %d\n",min);

    return 0;
}
