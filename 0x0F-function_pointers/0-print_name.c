#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - outputs a name
 * @name: name to be displayed
 * @f: pointer to function
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
