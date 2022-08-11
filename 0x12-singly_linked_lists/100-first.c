#include <stdio.h>

/**
 * first - function that gets executed before main
 * Return: None
 */

void __attribute__ ((constructor)) first()
{
	printf("You're the beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
