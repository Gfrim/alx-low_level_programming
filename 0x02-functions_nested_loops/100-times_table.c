#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @a: number of the times table
 *
 */
void print_times_table(int a)
{
	int num, mult, result;

	if (a <= 15 && a >= 0)
	{
		for (num = 0; num <= a; num++)
		{
			_putchar('0');
			for (mult = 1; mult <= a; mult++)
			{
				_putchar(',');
				_putchar(' ');
				result = num * mult;
				if (result <= 99)
					_putchar(' '));

				if (result <= 9)
					_putchar(' ');

				if (result >= 100)
				{
					_putchar((result / 100) + '0');
					_putchar((result / 10) % 10 + '0');
				}
				else if (result <= 99 && result >= 10)
				{
					_putchar((result / 10) + '0');
				}
				_putchar((result % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
