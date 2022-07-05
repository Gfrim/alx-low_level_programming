#include "main.h"

/**
 * print_alphabet_x10 - print 10 times alphabets in lowercase.
 *
 */
void print_alphabet_x10(void)
{
	char ch;
	int c;

	c = 1;
	while (c <= 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		c++;
	}
}
