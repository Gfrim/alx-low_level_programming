#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for the program 101-cracker
 *
 * Return: Always 0
 */

int main(void)
{
	int psswd[100];

	int sum, i, j;

	sum = 0;
	srand(time(NULL));
	for (i = 0; i < 100; i++)
	{
		psswd[i] = rand() % 78;
		sum += (psswd[i] + '0');
		putchar(psswd[i] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			j = 2772 - sum - '0';
			sum += j;
			putchar(j + '0');
			break;
		}
	}
	return (0);
}
