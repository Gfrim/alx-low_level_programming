#include "main.h"
#define NULL 0

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

	while (s[i] != c && s[i] != '\0')
		i++;

	if (s[i] == c)
		return (&s[i]);
	else
		return (NULL);
}
