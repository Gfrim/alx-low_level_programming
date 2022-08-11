#include <stdio.h>

void __attribute__((constructor)) premain(void);

/**
 * first - function that gets executed before main
 * Return: None
 */

void premain(void)
{
	printf("You're beat! and yet, you must allow, \n"
	"I bore my house upon my back!\n");
}
