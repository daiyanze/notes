#include <stdio.h>

int main(int argc, char *argv[])
{
	printf("Program Name : %s\n", argv[0]);
	if (argc == 2)
	{
		printf("The argument supplied is %s\n", argv[1]);
	}
	else if (argc > 2)
	{
		printf("Too many arguments supplied.\n");
	}
	else
	{
		printf("Please at least input one argument.\n");
	}
}