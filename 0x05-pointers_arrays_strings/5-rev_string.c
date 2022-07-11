#include "main.h"

/**
 * rev_string - Reverse a string
 * @s: string parameter
 *
 * Return: void
 */

void rev_string(char *s)
{
	char *t = s;
	char new[1000];
	short c = 0;

	while (*s != '\0')
	{
		new[c] = *s;
		s++;
		c++;
	}
	c = 0;

	while (s > t)
	{
		s--;
		*s = new[c];
		c++;
	}
}
