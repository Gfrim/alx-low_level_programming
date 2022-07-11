#include "main.h"

/**
 * puts_half - Prints ha;f of a string
 * @str: string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int n;
	int len = 1;

	for (; str[len] != '\0';)
		len++;

	if (len % 2)
	{
		n = (len - 1) / 2;
		for (; n < (len - 1); n++)
			_putchar(str[n + 1]);
	}
	else
	{
		n = len / 2;
		for (; n < len; n++)
			_putchar(str[n]);
	}
	_putchar('\n');
}
