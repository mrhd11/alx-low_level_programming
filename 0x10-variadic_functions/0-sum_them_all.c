#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Short description, single line
 * @n: Number of arguments
 *
 * Return: the sum of the arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	int sum;

	sum = 0;

	unsigned int i;

	if(n == 0)

		return (0);

	else
	{

		va_start(args, n);

		for (i = 0; i < n; i++)
		{
			sum += va_arg(args, int);
		}

		va_end(args);
		return sum;
	}
}

