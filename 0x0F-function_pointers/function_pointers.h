#ifndef pointer_to_function_H
#define pointer_to_function_H

#include <stdio.h>
#include <stdlib.h>

int _putchar(char);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action(int)));

#endif
