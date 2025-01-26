#include<stdio.h>

struct Person
{
    int age;
    float salary;
};
int main()
{
    struct Person person1 = {27,2565.12};
    struct Person person2 = {25,2654.25};
    struct Person person3;

    person3 = person2;

    if(person1.age==person2.age && person1.salary==person2.salary)
        printf("person1 equal to person2");
    else
        printf("person1 not equal to person2");

       if(person2.age==person3.age && person2.salary==person3.salary)
        printf("\n\nperson2 equal to person3");
    else
        printf("person2 not equal to person3");

    getch();
}
