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
	int i = 48;
	int j = 0;

	for (j; j <= 9; j++)
	{
		if ((j == 2) || (j == 4))
			continue;
		else
		{
			_putchar(i);
		}
		i++;
	}
	_putchar('\n');
}

