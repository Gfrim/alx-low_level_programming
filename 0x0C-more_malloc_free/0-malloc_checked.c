#include "main.h"
#include <limits.h>
#include <stdlib.h>

/**
 * malloc_checked - Allocating memory using malloc
 * @b: Parameter
 *
 * Return: Pointer
 */

void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);

	if (!i)
		exit(98);
	return (i);
}
