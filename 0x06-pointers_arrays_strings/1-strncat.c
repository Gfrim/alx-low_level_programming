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
	int dest_len, i;

	dest_len = strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	
	return (dest);
}
