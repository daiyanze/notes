#include <stdio.h>
#include <stdarg.h>

double average(long num,...)
{
	va_list valist;
	double sum = 0.0;
	int j = 0;

	va_start(valist, num);
	// for (int i = 0; i < num; ++i)
	// {
	// 	sum += 	va_arg(valist, int);
	// }
	j = va_arg(valist, int);
	// printf("%d",j);
	printf("%lu",sizeof(&valist));
	printf("%x",&j);
	va_end(valist);

	return 0.0;
}

int main()
{
	printf("The average number of 1, 5, 3, 23, 22 is %f\n", average(11111111111111,5,3,23,22,123));
	printf("The average number of 66, 2, 123, 88, 4 is %f\n", average(66,2,123,88,4));
}