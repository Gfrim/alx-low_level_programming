#include "main.h"

/**
 * print_line - draws straight line
 * @n: number of times line should be printed
 *
 * Return: Straight line
 */
void print_line(int n)
{
	while (n-- > 0)
	{
		_putchar('_');
	}
	_putchar('\n');
}
