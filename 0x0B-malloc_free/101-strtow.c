#include "main.h"
#include <stdlib.h>

/**
 * wordcounter - count words present in the string
 * @str: string
 *
 * Return: int
 */

int wordcounter(char *str)
{
	int i = 0, words = 0, len = 0;

	for (i = 0; *(str + i); i++)
		len++;

	for (i = 0; i < len; i++)
	{
		if (*(str + i) != ' ')
		{
			words++;
			i += word_len(str + i);
		}
	}
	return (words);
}


/**
 * strtow - Splits a string into words
 * @str: string
 *
 * Return: words
 */

char **strtow(char *str)
{
	char **strings;
	int i = 0, words, chr, letters, k;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = wordcounter(str);

	if (words == 0)
		return (NULL);

	strings = malloc(sizeof(char *) * (words + 1));
	if (strings == NULL)
		return (NULL);

	for (chr = 0; chr < words; chr++)
	{
		while (str[i] == ' ')
			i++;

		letters = word_len(str + i);

		strings[chr] = malloc(sizeof(char) * (letters + 1));

		if (strings[chr] == NULL)
		{
			for (; chr >= 0; chr--)
				free(strings[chr]);
			free(strings);
			return (NULL);
		}

		for (k = 0; k < letters; k++)
			strings[chr][k] = str[i++];

		strings[chr][k] = '\0';
	}
	strings[chr] = NULL;
	return (strings);
}
