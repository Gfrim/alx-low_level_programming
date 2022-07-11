#include "main.h"

/**
 * puts2 - prints every other character of a string, starting with the first character,
 *  followed by a new line.
 *  @str: parameter
 *
 *  Return: void
 */

void puts2(char *str)
{
	int k, j = 0;

	while (str[k] != '\0')
	{
		k++;
	}

	while (j < k)
	{
		_putchar(str[j]);
		j += 2;
	}
	_putchar('\n');
}
