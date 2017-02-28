#include <stdio.h>
#include <string.h>

typedef struct Pen
{
	int length;
	char color[50];
	char type[50];
} Pen;

int main()
{
	Pen pen;
	pen.length = 10;
	strcpy(pen.color, "Red");
	strcpy(pen.type, "Ballpen");

	printf("This %s %s is %dcm long.\n", pen.color, pen.type, pen.length);
}