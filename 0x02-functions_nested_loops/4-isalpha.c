#include <ctype.h>
#include "main.h"

/**
 * _isalpha - Check if input is an alphabet
 *
 * @c: input needed
 *
 * Return: 1 if true or 0 is not
 */
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
