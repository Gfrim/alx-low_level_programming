#include "main.h"
#include <string.h>

/**
 * _strncat - Concatenates two strings with a limit
 * @dest: First parameter
 * @src: Second parameter
 * @n: limit
 *
 * Return: Pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int len;
	char *p;

	for (len = 0; dest[len] != '\0';)
		len++;
	p = dest + len;

	while (*src != '\0' && n--)
		*p++ = *src++;

	*p = '\0';
	return (dest);
}
