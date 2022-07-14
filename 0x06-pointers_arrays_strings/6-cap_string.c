#include "main.h"

/**
 * cap_string - capitalize all words in a string
 * @s: string
 *
 * Return: char
 */

char *cap_string(char *s)
{
	int len, i;
	char sep[13] = {' ', '\t', '\n', ',', ';', '.', '!',
		'?', '"', '(', ')', '{', '}'};

	for (len = 0; s[len] != '\0'; len++)
	{
		if (len == 0 && s[len] >= 97 && s[len] <= 122)
			s[len] -= 32;

		for (i = 0; i < 13; i++)
			if (s[len] == sep[i])
				if (s[len + 1] >= 97 && s[len + 1] <= 122)
					s[len + 1] -= 32;
	}
	return (s);
}
