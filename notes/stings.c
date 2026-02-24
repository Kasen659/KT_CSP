#include <stdio.h>
#include <string.h>

int main(){
    char subject[] = "computer science principles";
    char fruit[] = "grape";
    char book[50];

    printf("subject: %s\nfruit: %s\n", subject, fruit);

    printf("What is your favorite book: ");
    //scanf("%s", &book);
    fgets(book, sizeof(book), stdin);

    printf("Your book is %s. That is a really good book\n", book);

    // concatinaton 
    char first[] = "Kasen";
    char last[] = "Thomas";
    
    first[0] = 'A';
    first[1] = 'b';
    first[2] = 'b';
    first[3] = 'y';
    first[4] = ' ';
    strcat(first, " ");
    strcat(first, last);

    printf("%s\n", first);

    char alpha[27];

    strcat(alpha, "abcdefghijklmnopqrstuvwxyz");

    printf("%s\n", alpha);

    //find langth of string
    printf("%lu\n", strlen(first));

    return 0;
}