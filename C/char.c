#include <stdio.h>

int main()
{
	char *x = NULL;
	int m = 10;
	char generate[20] = "hello";
	int *s;
	s = &m;
	printf("%s\n",x);
	printf("%x\n",s);
	printf("%s world\n", generate);
}