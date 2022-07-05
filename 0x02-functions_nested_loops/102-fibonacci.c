#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: 0 Success
 */

int main(void)
{
	int a = 3;

	long int b = 1, c = 2;
	long int d = b + c;

	printf("%lu, ", b);
	printf("%lu, ", c);

	while (a <= 50)
	{
		if (a == 50)
			printf("%lu \n", d);
		else
			printf("%lu, ", d);

		b = c;
		c = d;
		d = b + c;
		a++;
	}
	return (0);
}
