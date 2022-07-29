#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: Starting point
 * @max: ending point
 *
 * Return: Pointer
 */

int *array_range(int min, int max)
{
	int *array;
	int i, j = 0;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(*array) * ((max - min) + 1));
	if (array != NULL)
	{
		for (i = min; i <= max; i++)
		{
			array[j] = i;
			j++;
		}
		return (array);
	}
	else
		return (NULL);
}
