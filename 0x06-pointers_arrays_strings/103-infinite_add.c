#include "main.h"

/**
 * reverse_string - reverse an array
 * @n: parameter
 *
 * Return: void
 */

void reverse_string(char *n)
{
	int i = 0, j = 0;
	char tem;

	while (*(n + i) != '\0')
		i++;
	i--;

	for (j = 0; j < i; j++, i--)
	{
		tem = *(n + j);
		*(n + j) = *(n + i);
		*(n + i) = tem;
	}
}

/**
 * infinite_add - adds two integers
 * @n1: First number
 * @n2: Second number
 * @r: result holder
 * @size_r: result holder size
 *
 * Return: char
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int overflow = 0, i = 0, j = 0, digits = 0;
	int num1 = 0, num2 = 0, temp = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;

	i--;
	j--;

	if (j > size_r || i > size_r)
		return (0);

	while (j >= 0 || i >= 0 || overflow >= 1)
	{
		if (i < 0)
			num1 = 0;
		else
			num1 = *(n1 + i) - '0';
		if (j < 0)
			num2 = 0;
		else
			num2 = *(n2 + j) - '0';
		temp = num1 + num2 + overflow;
		if (temp >= 10)
			overflow = 1;
		else
			overflow = 0;
		if (digits>= (size_r - 1))
			return (0);

		*(r + digits) = (temp % 10) + '0';
		digits++;
		j--;
		i--;
	}
	if (digits == size_r)
		return (0);
	*(r + digits) = '\0';
	reverse_string(r);
	return (r);
}
