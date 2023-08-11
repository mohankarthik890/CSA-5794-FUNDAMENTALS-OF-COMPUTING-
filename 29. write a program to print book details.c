//29. Write a C Program to print the book details( Title , author, Subject,bookid - s structure member) using structures as Function Arguments
#include <stdio.h>
struct book {
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};
void print_book(struct book b);
int main() {
    struct book b;
    printf("Enter book title: ");
    scanf("%s", b.title);
    printf("Enter book author: ");
    scanf("%s", b.author);
    printf("Enter book subject: ");
    scanf("%s", b.subject);
    printf("Enter book ID: ");
    scanf("%d", &b.book_id);
    print_book(b);
    return 0;
}
void print_book(struct book b) {
    printf("\nBook details:\n");
    printf("Title: %s\n", b.title);
    printf("Author: %s\n", b.author);
    printf("Subject: %s\n", b.subject);
    printf("Book ID: %d\n", b.book_id);
}

