#include <stdio.h>
#include <stdlib.h>

int main()
{
	int dividend = 20;
	int divisor;
	int quotient;

	printf("Enter a number as divisor:\n");
	scanf("%d", &divisor);

	if (divisor == 0)
	{
		fprintf(stderr, "Divisor cannot be zero...\n");
		exit(EXIT_FAILURE);
	}
	else
	{
		quotient = dividend/divisor;
		fprintf(stderr, "Quotient is %d\n", quotient);
		exit(EXIT_SUCCESS);
	}
}