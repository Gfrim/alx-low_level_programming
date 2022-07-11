#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array
 * @a: Address of array
 * @n: size of array
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		if (!(i == (n - 1)))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
