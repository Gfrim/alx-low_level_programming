#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	signed int l = 97;
	signed int u = 65;

	while (l < 123)
	{
		putchar(l);
		l++;
	}
	while (u < 91)
	{
		putchar(u);
		u++;
	}
	putchar(10);
	return (0);
}
