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
	if(n == 0) return (0);

	else
	{

		va_list args;

		va_start(args, n);
	
		int sum;

		sum = 0;
	
		unsigned int i;

		for (i = 0; i < n; i++)
		{
			sum += va_arg(args, int);
		}

		va_end(args);
		return sum;
	}
}

