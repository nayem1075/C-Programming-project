#include<stdio.h>

struct Person
{
    int age;
    float salary;
};

int main()
{
    struct Person person1 = {27,27500.50};
    struct Person person2,person3;

    //element wise assignment
    person2.age = 25;
    person2.salary = 25000.25;

    //structure variable assignment
    person3 = person2;

    printf("Person 1 : \n");
    printf("\tAge = %d\n",person1.age);
    printf("\tSalary = %.2f\n",person1.salary);

     printf("\nPerson 2 : \n");
    printf("\tAge = %d\n",person2.age);
    printf("\tSalary = %.2f\n",person2.salary);

     printf("\nPerson 3 : \n");
    printf("\tAge = %d\n",person3.age);
    printf("\tSalary = %.2f\n",person3.salary);



    getch();
}
