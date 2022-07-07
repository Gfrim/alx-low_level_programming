#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _isdigit - checks whether input is a digit
 * @c: parameter
 *
 * Return: 1 or 0
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
