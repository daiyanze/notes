#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Book
{
	char name[20];
	char description[5];
	float price;
} Book;

int main()
{
	Book Book;
	char *s;
	float p;
	// s = malloc(2*sizeof(char));
	s = calloc(2, sizeof(char));

	printf("Enter Book Name\n");
	scanf("%s", s);
	strcpy(Book.name, s);

	// s = realloc(s, 100*sizeof(char));
	s = (char *)realloc(s, 100);
	printf("Enter Book Description\n");
	scanf("%s", s);
	strcpy(Book.description, s);
	printf("Enter Book Price\n");
	scanf("%f", &p);
	Book.price = p;
	fflush(stdin);

	printf("\n");
	printf("Book: %s\nDescription: %s\nPrice: %f\n", Book.name, Book.description, Book.price);

	free(s);
	getchar();
	return 0;

}