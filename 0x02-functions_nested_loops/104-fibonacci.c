#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: 0
 */
int main(void)
{
	int i;
	unsigned long v1 = 0, v2 = 1, v3;

	for (i = 0; i < 98; i++)
	{
		v3 = v1 + v2;
		if ( i != 8)
			printf("%lu, ", v3);
		else
			printf("%lu, ", v3);

		v1 = v2, v2 = v3;
	}
	return (0);
}
