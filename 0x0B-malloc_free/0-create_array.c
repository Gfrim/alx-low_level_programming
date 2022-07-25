#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and
 * initialize it with a specific char
 * @size: size of array
 * @c: specific character
 *
 * Return: Pointer
 */

char *create_array(unsigned int size, char c)
{
	char *str[];

	str = malloc(sizeof(*str) * size);
	str[0] = c;

	if (size == 0)
		return (NULL);
	else
		return (str);
}
