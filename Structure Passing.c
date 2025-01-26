#include<stdio.h>

struct Person
{
    char name[20];
    int age;
    float salary;
};

void display(struct Person p)
{
    printf("\nName = %s\n",p.name);
    printf("Age = %d\n",p.age);
    printf("Salary = %.2f\n",p.salary);
}

int main()
{
    struct Person person1,person2;

    strcpy(person1.name,"Nayem Uddin");
    person1.age = 19;
    person1.salary = 100.22;
    display(person1);

    strcpy(person2.name,"Ainan");
    person2.age = 20;
    person2.salary = 13000.55;
    display(person2);

    getch();
}
