#include "main.c"

/**
 * print_diagonal - draws a diagonal line
 * @n: number of times \ should be printed
 *
 * Return: nothing
 */
void print_diagonal(int n)
{
	int i, b;

	if (n > 0)
	{
		for (j = 1; b <= n; b++)
		{
			for (i = 1; i <= j; i++)
			{
				if (i != 1)
					_putchar(' ');
				else if (i == j)
				{
					_putchar('\\');
					_putchar('\n');
				}
			}
		}
	}
	else
		_putchar('\n');
}


}
