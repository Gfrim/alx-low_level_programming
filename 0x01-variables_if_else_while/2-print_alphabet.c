#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	signed int a = 97;

	while (a < 123)
	{
		putchar(a);
		a++;
	}
	putchar(10);
	return (0);
}
