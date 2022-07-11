#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: string parameter
 *
 * Return: void
 */

void print_rev(char *s)
{
	int c = 0;

	while (*s != 0)
	{
		s++;
		c++;
	}

	while (c > 0)
	{
		s--;
		_putchar(*s);
		c--;
	}
	_putchar('\n');
}
