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
	char new[] = str;
	char *a = new;

	if (str == NULL)
		return (NULL);
	return (a);
}
