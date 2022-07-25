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
	char *str;
	int i;

	i = 0;
	while (1)
	{
		str = malloc(sizeof(*str) * size);
		str[i] = c;

		if (size == 0 || str == NULL)
			return (NULL);
		i++;
		return (str);
	}
}
