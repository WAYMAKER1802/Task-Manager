#include <stdio.h>

// Structure definition
struct Book
{
    int book_id;
    char title[50];
    char author[50];
    float price;
};

// Function that takes structure as argument
void displayBook(struct Book b)
{
    printf("\n--- Book Details ---\n");
    printf("Book ID     : %d\n", b.book_id);
    printf("Title       : %s\n", b.title);
    printf("Author      : %s\n", b.author);
    printf("Price       : %.2f\n", b.price);
}

int main()
{
    struct Book b;

    printf("Enter Book ID: ");
    scanf("%d", &b.book_id);

    printf("Enter Title: ");
    scanf("%s", b.title); // For single-word titles; use fgets() if needed

    printf("Enter Author Name: ");
    scanf("%s", b.author);

    printf("Enter Price: ");
    scanf("%f", &b.price);

    // Passing structure to function
    displayBook(b);

    return 0;
}
