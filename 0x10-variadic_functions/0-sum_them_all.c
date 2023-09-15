#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Sums a variable number of integers
 * @n: The number of integers to sum
 * @...: The integers to sum
 *
 * Return: The sum of the integers
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	int sum = 0;

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

