#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocating memory using malloc
 * @b: Parameter
 *
 * Return: Pointer
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *i;

	while (1)
	{
		i = malloc(INT_MAX);
		if (i == NULL)
			_putchar(98);
	}
	i = b;
}
