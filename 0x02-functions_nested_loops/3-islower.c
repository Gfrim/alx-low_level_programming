#include <ctype.h>
#include "main.h"

/**
 * _islower - checks for lowercase character.
 * @c: Decimal of a character based on ASCII.
 *
 * Return: 1 (True) or 0 (False)
 */
int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
