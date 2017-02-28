#include <stdio.h>
#include <errno.h>
#include <string.h>

extern int errno;

int main()
{
	FILE * fp;
	int errnum;
	fp = fopen("no.txt", "rb");
	if (fp == NULL) 
	{
		errnum = errno;
		fprintf(stderr, "Error Number: %d\n", errnum);
		perror("Error thrown by perror()");
		fprintf(stderr, "Error on opening file: %s\n", strerror(errnum));
	}
	else
	{
		fclose(fp);
	}

}