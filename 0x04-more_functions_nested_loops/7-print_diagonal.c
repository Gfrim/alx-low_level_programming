#include "main.c"

/**
 * print_diagonal - draws a diagonal line
 * @n: number of times \ should be printed
 *
 * Return: nothing
 */
void print_diagonal(int n)
{
	while (n-- <= 0)
	{
		_putchar('\');
	}
	_putchar('\n');
}
