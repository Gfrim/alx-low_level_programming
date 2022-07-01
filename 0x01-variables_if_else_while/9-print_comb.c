#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	signed int a = 48;

	while (a <= 57)
	{
		putchar(a);
		if (!(a == 57))
		{
			putchar(44);
			putchar(32);
		}
		a++;
	}
	putchar(10);
	return (0);
}
