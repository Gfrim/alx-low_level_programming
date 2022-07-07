#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - print numbers from 0 to 9
 * excluding 2 and 4
 *
 * Return: 1 to 9 without 2 and 4
 */
void print_most_numbers(void)
{
	int i = 48, j = 0;

	while (i <= 57)
	{
		if (j == 2 || j == 4)
			continue;
		else
		{
			_putchar(i);
			i++;
			j++;
		}
	}
	_putchar('\n');
}

