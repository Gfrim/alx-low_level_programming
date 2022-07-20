#include "main.h"

/**
 * _puts_recursion - A function that prints a string
 * followed by a new line
 * @s: string
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
		return;

	_putchar(s[i]);
	_puts_recursion(s + 1);
}
