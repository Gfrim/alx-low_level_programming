#include "main.h"

/**
 * reverse_array - Reverese the content of an array
 * of integers
 * @a: Pointer
 * @n: number of elements
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, j, temp;

	for (i = 0, j = (n - 1); i < (n / 2); i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
