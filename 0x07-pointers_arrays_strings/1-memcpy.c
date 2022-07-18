#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination od copied data
 * @src: source of copied data
 * @n: number of bytes to be copied
 *
 * Return: Pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);

	return (dest);
}
