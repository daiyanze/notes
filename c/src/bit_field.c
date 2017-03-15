#include <stdio.h>

struct Status_x
{
	unsigned int status_1;
	unsigned int status_2;
} status_x;

struct
{
	unsigned int status_1 : 1;
	unsigned int status_2 : 1;
} status_y;

int main()
{
	printf("Memory size occupied by Status_x : %d\n", sizeof(status_x));
	printf("Memory size occupied by Status_y : %d\n", sizeof(status_y));
}