#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>


int _putchar(char );
void *malloc_checked(unsigned int );
char *string_nconcat(char *, char *, unsigned int );
void *_calloc(unsigned int , unsigned int );
int *array_range(int , int );
void *_realloc(void *, unsigned int, unsigned int);
int find_len(char *str);
char *_memset(char *s, char b, usigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
int onlyNumbers(char *c);
void multiply(char* s1, char* s2);

#endif
