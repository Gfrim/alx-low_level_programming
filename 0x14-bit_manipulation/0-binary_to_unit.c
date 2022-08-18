#include "main.h"

/**
 * binary_to_uint - converts binary number to
 * an unsigned int
 * @b: binary
 *
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	int uint, len = 0, i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
		len++;

	for (i = 0; i < len; i++)
	{
		uint += b[i] * 2 ^ len;
		--len;
		if (b[i] != 1 || b[i] != 0)
			return (0);
	}

	if (uint == 0)
		return (0);
}
