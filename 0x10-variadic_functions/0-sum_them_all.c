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
	va_list args;

	va_start(args, count);

	int result = 0;

	for (int i = 0; i < count; i++)
	{
		result += va_arg(args, int);
	}

	va_end(args);
	return result;
}
