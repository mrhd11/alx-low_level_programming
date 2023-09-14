#include <stdio.h>
#include <stdarg.h>

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

	va_start(args, n);

	if(n == 0) return (0);
	else
	{
		int value = va_arg(arg, unsigned int);
		printf("%d", value);
	}

	va_end(args);
}
