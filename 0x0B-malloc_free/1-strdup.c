#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Copies a string to a newly allocated
 * space in memory
 * @str: string
 *
 * Return: Pointer
 */

char *_strdup(char *str)
{
	char *new;
	unsigned int i;

	new = malloc(sizeof(*new) * sizeof(*str));
	for (i = 0; i < sizeof(*str); i++)
		new[i] = str[i];
	
	if (str == NULL || new == NULL)
		return (NULL);
	_putchar(new);
	free(t);
}
