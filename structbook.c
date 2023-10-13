
#include <stdio.h>
#include <string.h>

#define MAX_SIZE 10

// Structure to represent a book
struct Book {
    int id;
    char title[100];
    char author[100];
    char subject[100];
};

// Function to store information about ten books in an array of structures
void storeBooks(struct Book books[]) {
    printf("Enter the details of ten books:\n");
    for (int i = 0; i < MAX_SIZE; i++) {
        printf("Book %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &books[i].id);
        printf("Title: ");
        scanf(" %[^\n]s", books[i].title);
        printf("Author: ");
        scanf(" %[^\n]s", books[i].author);
        printf("Subject: ");
        scanf(" %[^\n]s", books[i].subject);
        printf("\n");
    }
}

int main() {
    // Declare an array of structures
    struct Book books[MAX_SIZE];

    // Store information about ten books
    storeBooks(books);

    // Display the stored information
    printf("Books stored:\n");
    for (int i = 0; i < MAX_SIZE; i++) {
        printf("Book %d:\n", i + 1);
        printf("ID: %d\n", books[i].id);
        printf("Title: %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);
        printf("Subject: %s\n", books[i].subject);
        printf("\n");
    }

    return 0;
}

