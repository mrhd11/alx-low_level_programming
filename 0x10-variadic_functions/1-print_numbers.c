#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - Prints a list of numbers
 * @separator: The string to print between numbers
 * @n: The number of integers to print
 * @...: The integers to print
 *
 * Description: This function prints a list of integers separated by the
 * separator string. If separator is NULL, no separator is printed. A new line
 * is printed at the end of the list.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	
	int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		if ((i != n-1) && (separator != NULL))
			{
				printf("%c", separator);
			}
	}

	va_end(args);
	printf("\n");
}
