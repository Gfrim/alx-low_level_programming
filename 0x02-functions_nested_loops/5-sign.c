#include "main.h"

/**
 * print_sign - prints the sign of a nummber
 * @n: number
 *
 * Return: 1 and '+', 0 and 0, -1 '-' based on a condition
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
