#include "main.h"
#include <string.h>

/**
 * *_strcat - Concatenates two strings
 * @dest: pointer to first parameter
 * @src: pointer to second parameter
 *
 * Return: Pointer
 */

char *_strcat(char *dest, char *src)
{
	int src_len, dest_len, i;

	src_len = strlen(src);
	dest_len = strlen(dest);

	i = 0;

	for (; i < src_len; i++)
		dest[dest_len + i] = src[i];

	return (dest);
}
