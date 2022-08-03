#include "function_pointers.h"
#include <stdio.h>

/**
 * op_add - Perform summation on two numbers
 * @a: first number
 * @b: second number
 *
 * Return: int
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Performing subtratction on two numbers
 * @a: first number
 * @b: second number
 *
 * Return: int
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Muliplying two numbers
 * @a: first number
 * @b: second number
 *
 * Return: int
 */

int op_mul(int a, int b)
{
	return (a * b)
}

/**
 * op_div - Function to perform division
 * @a: first number
 * @b: second number
 *
 * Return: int
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Function to return remainder of divsion
 * @a: first number
 * @b: second number
 *
 * Return: int
 */

int op_mod(int a, int b)
{
	return (a % b);
}
