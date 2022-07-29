#include "main.h"
#include <stdlib.h>

int min(unsigned int, unsigned int);
/**
 * _realloc - Reallocates a memory block
 * @ptr: pointer to current memory block
 * @old_size: size for ptr
 * @new_size: size for new memory block
 *
 * Return: Pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *_newblock;
	int i;

	if (ptr == NULL)
	{
		_newblock = malloc(new_size);
		return (_newblock);
	}
	else if (new_size == old_size)
		return (ptr);
	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
		_newblock = malloc(new_size);
		if (_newblock != NULL)
		{
			for (i = 0; i < min(old_size, new_size); i++)
				*((char *)_newblock + i) = *((char *) ptr + i);
			free(ptr);
			return (_newblock);
		}
		else
			return (NULL);
	}
}

/**
 * min - finds the least number
 * @a: first parameter
 * @b: second parameter
 *
 * Return: int
 */

int min(unsigned int a, unsigned int b)
{
	return ((a > b) ? b : a);
}
