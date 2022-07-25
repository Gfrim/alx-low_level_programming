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
	int i;

	new = malloc(sizeof(*new));
	for (i = 0; i < sizeof(*str); i++)
		new[i] = str[i];

	if (str == NULL)
		return (NULL);
	return (new);
}
