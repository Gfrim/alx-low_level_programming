#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	signed int a = 48;
	signed int b = 97;

	while (a <= 57)
	{
		putchar(a);
		a++;
	}
	while (b <= 102)
	{
		putchar(b);
		b++;
	}
	putchar(10);
	return (0);
}
