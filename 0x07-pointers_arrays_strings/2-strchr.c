#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string
 * @s: pointer to a string
 * @c: character to locate
 *
 * Return: Pointer to c
 */

char *_strchr(char *s, char c)
{
	int i;

	while (s[i] != c)
		i++;

	if (s[i] == c)
		return (&s[i]);
	else
		return (NULL);
}
