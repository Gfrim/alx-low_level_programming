#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments
 * @ac: first parameter
 * @av: second parameter
 *
 * Return: string
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int arg, byte, i, len = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			len++;
	}

	str = malloc(sizeof(char) * size + 1);

	if (str == NULL)
		return (NULL);

	i = 0;
	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			str[i++] = av[arg][byte];

		str[i++] = '\n';
	}

	str[len] = '\0';
	return (str);
}
