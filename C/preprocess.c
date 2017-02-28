#include <stdio.h>
#include "test.h"

#undef TEST
#define TEST 20
#define INCORRECT "INCORRECT"

#ifndef MAX
	#define MAX 100
#endif

#if !defined (CORRECT) & !defined(MIN)
	#define CORRECT "CORRECT"
	#define MIN 0
#elif !defined (CORRECT) & defined(MIN)
	#define CORRECT "INCORRECT"
#elif defined (CORRECT) & !defined(MIN)
	#define MIN 0
#else
	#undef TEST
#endif

#define SQUARE(x) ((x)*(x))
#define IS_CORRECT(x) ((x) > 0 ? INCORRECT : CORRECT)


int main()
{
	printf("%d\n", TEST);
	printf("%d\n", SQUARE(TEST));
	printf("%s\n", IS_CORRECT(TEST));
}