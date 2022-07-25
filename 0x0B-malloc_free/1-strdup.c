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

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		;
	i++;

	new = malloc(sizeof(*new) * i);
	if (new == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
		new[j] = str[j];
	return (new);
}
