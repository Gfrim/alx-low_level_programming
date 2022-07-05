#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: 0
 */
int main(void)
{
	int i;
	unsigned long j = 0;
	unsigned long k = 1;
	unsigned long l = j + k;

	for (i = 0; i < 98; i++)
	{
		printf("%lu", l);
		j = k;
	       	k = l;
		l = j + k;

		if (i == 97)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
