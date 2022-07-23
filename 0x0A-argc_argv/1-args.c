#include <stdio.h>
#include "main.h"

/**
 * main - print the name of the program
 * @argc: counts arguments
 * @argv: arguments pointer to arrays
 * Return: return always 0 (success)
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%i\n", argc - 1);

	return (0);
}
