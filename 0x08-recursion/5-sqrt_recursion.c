#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square rooit
 * of a number
 * @n: parameter
 *
 * Return: int
 */

int _sqrt_recursion(int n)
{
	return (_squareroot(n, 1));
}

/**
 * _squareroot - square root recursion
 * @i: first parameter
 * @j: second parameter
 *
 * Return: int
 */

int _squareroot(int n, int j)
{
	if (n < 0)
		return (-1);
	if ((j * j) > n)
		return (-1);
	if (j * j == n)
		return (j);
	return (_squareroot(n, j + 1));
}
