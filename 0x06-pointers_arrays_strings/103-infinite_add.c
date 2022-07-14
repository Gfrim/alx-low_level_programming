#include "main.h"

/**
 * infinite_add - adds two integers
 * @n1: First number
 * @n2: Second number
 * @r: result holder
 * @size_r: result holder size
 *
 * Return: char
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	r = n1 + n2;

	if (sizeof(r) < size_r)
		return (0);
	return (r);
}
