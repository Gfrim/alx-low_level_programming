#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Patternise a two dimensional array
 * @width: size of width
 * @height: size of height
 *
 * Return: Pointer
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int widthIndex, heightIndex;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(sizeof(**array) * height);

	if (array == NULL)
		return (NULL);

	for (heightIndex = 0; heightIndex < height; heightIndex++)
	{
		array[heightIndex] = malloc(sizeof(int) * width);
		if (array[heightIndex] == NULL)
		{
			for (; heightIndex >= 0; heightIndex--)
				free(array[heightIndex]);

			free(array);
			return (NULL);
		}
	}

	for (heightIndex = 0; heightIndex < height; heightIndex++)
	{
		for (widthIndex = 0; widthIndex < width; widthIndex++)
			array[heightIndex][widthIndex] = 0;
	}
	return (array);
}
