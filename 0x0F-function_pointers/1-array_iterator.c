#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes a function given as a
 * parameter on each element of an array
 * @array: array to be used
 * @size: size of the array
 * @action: pointer to a function
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && action)
		return;

	while (size--)
		action(*(array++));
}
