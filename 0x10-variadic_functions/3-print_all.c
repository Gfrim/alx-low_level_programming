#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - print all parameters
 * @format: type of parameter
 *
 * Rteurn: void
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i = 0, j = 0;
	char *c;

	va_start(ap, format);
	while (format && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
			switch (j)
			{ case 1:printf(", "); }
			j = 1;
			printf("%c", va_arg(ap, int));
			break;
		case 'i':
			switch (j)
			{ case 1:printf(", "); }
			j = 1;
			printf("%i", va_arg(ap, int));
			break;
		case 'f':
			switch (j)
			{ case 1:printf(", "); }
			j = 1;
			printf("%f", va_arg(ap, double));
			break;
		case 's':
			switch (j)
			{ case 1:printf(", "); }
			j = 1;
			c = va_arg(ap, char *);
			if (c)
			{ printf("%s", c);
			break; }
			printf("%p", c);
			break; }
	i++; }
	printf("\n");
	va_end(ap);
}
