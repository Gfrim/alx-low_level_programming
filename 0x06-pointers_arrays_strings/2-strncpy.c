#include "main.h"

/**
 * *_strncpy - Copies a string
 * @dest: Pointer
 * @src: Pointer
 * @n: limit
 *
 * Return: Pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

