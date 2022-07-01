#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	signed int a = 122;

	while (a >= 97)
	{
		putchar(a);
		a--;
	}
	putchar(10);
	return (0);
}
