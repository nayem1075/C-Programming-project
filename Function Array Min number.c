#include<stdio.h>
int minimum(int x[])
{
    int i,min=x[0];
    for(i=0; i<5; i++)
    {
        if(min>x[i])
            min = x[i];
    }
    return min;
}
int main()
{
    int num[] = {10,2,3,40,50};
    int minimumValue = minimum(num);
    printf("The minimum Value is %d\n",minimumValue);

}
