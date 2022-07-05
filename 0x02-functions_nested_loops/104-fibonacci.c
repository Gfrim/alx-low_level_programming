#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: 0
 */
int main(void)
{
	int i;
	unsigned long v1 = 0, v2 = 1, v3, v1H1, v1H2, v2H1, v2H2, h1, h2;

	for (i = 0; i < 92; i++)
	{
		v3 = v1 + v2;
		printf("%lu, ", v3);
		v1 = v2, v2 = v3;
	}
	v1H1 = v1 / 10000000000, v2H1 = v2 / 10000000000, v1H2 = v1 % 10000000000, v2H2 = v2 % 10000000000;

	for (i = 93; i < 99; i++)
	{
		h1 = v1H1 + v2H1, h2 + v1H2 + V2h2;
		if ((v1H2 + v2H2) > 9999999999)
		{
			h1 += 1, h2 %= 10000000000;
		}
		printf("%lu%lu", h1, h2);

		if (i != 98)
			printf(", ");

		v1H1 = v2H2, v1H2 = v2H2, v2H1 = h1, v2H2 = h2;
	}

	printf("\n");
	return (0);
}
