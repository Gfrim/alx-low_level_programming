#include "main.h"
#include <string.h>

/**
 * _strchr - locates a character in a string
 * @s: pointer to a string
 * @c: character to locate
 *
 * Return: Pointer to c
 */

char *_strchr(char *s, char c)
{
	int len = strlen(*s);
	int i;

	for (i = 0; i < len & i != '\0'; i++)
	{
		if (*(s + i) == c)
			return (s + i);
		else
			return (NULL);
	}
}

