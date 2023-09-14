#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Short description, single line
 * @n: Description of parameter x
 *
 * Longer description of the function.
 *
 * Return: Description of the returned value
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum;

	sum = 0;

	va_list args;

	va_start(args, n);

	if(n == 0) return (0);
	else
	{
		int i;

		for(i = 0; i < n; i++)
		{
			sum += va_arg(args, int);
		}
		return (sum);
	}

	va_end(args);
}
