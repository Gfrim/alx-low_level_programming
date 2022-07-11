#include <string.h>
#include "main.h"

/**
 * puts_half - Prints ha;f of a string
 * @str: string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int half;
	int len = strlen(str);
	int n = ((len - 1) / 2);

	if (len % 2 == 0)
	{
		half = len / 2;
		for (half; half <= len; half++)
			_putchar(str[half]);
	}
	else
	{
		for (n; n <= len; n++)
			_putchar(str[n]);
	}
	_putchar('\n');
}
