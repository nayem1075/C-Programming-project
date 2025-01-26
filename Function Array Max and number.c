#include<stdio.h>
int maximum(int x[])
{
    int i,max=x[0];
    for(i=0; i<6; i++)
    {
        if(max<x[i])
            max=x[i];
    }
    return max; //return mean main function e patano
}
int main()
{
    int num[] ={10,20,30,40,50,60};
    int maximumValue = maximum(num);
    printf("The maximum value is %d\n",maximumValue);

}
