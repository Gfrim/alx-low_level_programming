#include <stdio.h>

/**
 * first - function that gets executed before main
 * Return: None
 */

void __attribute__ ((constructor)) first()
{
char *s1, *s2;
s1 = "You're the best! and yet, you must allow,\n";
s2 = "I bore my house upon my back!\n";
printf("%s%s", s1, s2);
}
