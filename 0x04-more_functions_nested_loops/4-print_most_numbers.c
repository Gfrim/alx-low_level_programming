#include "main.h"

/**
 * print_most_numbers - print numbers from 0 to 9
 * excluding 2 and 4
 *
 * Return: 1 to 9 without 2 and 4
 */
void print_most_numbers(void)
{
	int j;

	for (j = 0; j <= 9; j++)
	{
		if ((j == 2) || (j == 4))
			continue;
		else
		{
			_putchar(j + '0');
		}
	}
	_putchar('\n');
}

