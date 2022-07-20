#include "main.h"

/**
 * is_prime_number - Checks if number is a prime number
 * @n: parameter
 *
 * Return: int
 */

int is_prime_number(int n)
{
	if (((n % 2 == 0) & (n / 2 == n)) & ((n / n == 1) & (n % n == 0)))
		return (1);
	else
		return (0);
}
