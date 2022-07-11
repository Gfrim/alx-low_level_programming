#include "main.h"
#include <string.h>

/**
 * _strcpy - Copies the string pointed to by src,
 * including terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: First parameter
 * @src: Second parameter
 *
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0, i;

	for (; src[len] != '\0';)
		len++;

	for (i = 0; i < len; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}
