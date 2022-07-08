#include "main.h"

/**
 * print_square - prints a square with #
 * @size: size of the sqaure
 *
 * Return: nothing
 */
void print_square(int size)
{
	while (size > 0)
	{
		_putchar(size * '#');
		_putchar('\n');
		--size;
	}
	_putchar('\n');
}
