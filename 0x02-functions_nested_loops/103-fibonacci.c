#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	unsigned long i = 0, j = 1, k = 0, l = 0;

	while (k <= 4000000)
	{
		k = i + j;
		i = j, j = k;
		if ((i % 2) == 0)
			l += i;
	}
	printf("%ld\n", l);
	return (0);
}
