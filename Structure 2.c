#include<Stdio.h>

int main()
{
    //Local Structure use only main function
    struct Person
    {
        int age;
        float salary;
    };
   struct Person person1,person2;

   person1.age = 19;
   person1.salary = 2750.27;

   printf("Person 1 : \n");
   printf("Age = %d\n",person1.age);
   printf("Salary = %.2f\n",person1.salary);

    person2.age = 29;
   person2.salary = 3750.37;

   printf("\nPerson 2 : \n");
   printf("Age = %d\n",person2.age);
   printf("Salary = %.2f\n",person2.salary);
   getch();
}
