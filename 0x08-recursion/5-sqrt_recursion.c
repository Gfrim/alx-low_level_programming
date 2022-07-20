#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root 
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

int _squareroot(int i, int j)
{
	if (i < 0)
		return (-1);
	if ((j * j) > i)
		return (-1);
	if (j * j == n)
		return (j);
	return (_squareroot(i, j + 1));
}
