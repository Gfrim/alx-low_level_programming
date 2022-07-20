#include "main.h"

/**
 * _strlen_recursion - Returns the lenght of a string
 * @s: string
 *
 * Return: int
 */

int _strlen_recursion(char *s)
{
	int len;

	if (*s == '\0')
		return (0);
	s++;
	len = (1 + _strlen_recursion(s));
	return (len);
}
