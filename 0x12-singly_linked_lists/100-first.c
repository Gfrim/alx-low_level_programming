#include <stdio.h>

__attribute__((constructor))

/**
 * premain - function that gets executed before main
 * Return: None
 */

void premain(void)
{
	printf("You're beat! and yet, you must allow,\n"
	"I bore my house upon my back!\n");
}
