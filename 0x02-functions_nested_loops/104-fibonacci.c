#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: 0
 */
int main(void)
{
	int i =;
	unsigned long j = 0; k = 1; l;

	for (i = 0; i < 98; i++)
	{
		l = j + k;
		printf("%lu", l);
		j = k, k = l;

		if (i == 97)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
