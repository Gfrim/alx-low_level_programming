#include "main.h"

/**
 * leet - encodes a string using rot13
 * @s: string to be passed
 *
 * Return: char
 */

char *leet(char *s)
{
	int a, b;

	char *i = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *j = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; i[b] != '\0'; b++)
		{
			if (s[a] == i[b])
			{
				s[a] = j[b];
				break;
			}
		}
	}

	return (s);
}
