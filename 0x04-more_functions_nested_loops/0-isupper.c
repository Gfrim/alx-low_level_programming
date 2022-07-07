#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _isupper - Checks for uppercase parameters
 * @c: Character
 *
 * Return: 1 if true and 0 if false
 */
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
