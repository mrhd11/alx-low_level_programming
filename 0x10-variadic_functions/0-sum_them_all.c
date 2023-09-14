#include <stdarg.h>
#include "variadic_functions.h"

int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	va_start(args, n);

	int sum;

	sum = 0;
	
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		result += va_arg(args, int);
	}

	va_end(args);
	return sum;
}
