#include<stdio.h>

struct book
{
    char name[20];
    int price;
};

int main()
{
    typedef struct book Book;

    Book b = {"Amar Jiboni",350};

    printf("Book Name = %s\n",b.name);
    printf("Book Price = %d\n",b.price);

    getch();
}
