#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: Pointer
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j = 0, len = 0;
	char *new;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		len++;

	new = malloc(sizeof(*new) * len);

	if (new == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		new[j++] = s1[i];

	for (i = 0; s2[i]; i++)
		new[j++] = s2[i];

	return (new);
}
