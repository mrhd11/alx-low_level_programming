#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: size in bytes
 * Return: void pointer
 */

void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);
	if(p == NULL)
	{
		exit(98);
	}
	return (p);
}
