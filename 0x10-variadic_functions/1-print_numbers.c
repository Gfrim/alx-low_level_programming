#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print numbers followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed
 *
 * Return: int
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
		{
			printf("%d", va_arg(ap, int));
		}
		else
		{
			if (i == (n - 1))
				printf("%d", va_arg(ap, int));
			else
				printf("%d%s", va_arg(ap, int), separator);
		}
	}
	va_end(ap);
	printf("\n");
}
