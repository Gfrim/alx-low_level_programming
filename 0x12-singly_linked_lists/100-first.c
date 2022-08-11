#include <stdio.h>

void __attribute__((constructor)) first(void);

/**
 * first - function that gets executed before main
 * Return: None
 */

void first(void)
{
	printf("You're beat! and yet, you must allow, \n"
	"I bore my house upon my back!\n");
}
