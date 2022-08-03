#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry level
 * @argc: number of arguments
 * @argv: array of pointers to arguments
 *
 * Return: 0 Success
 */

int main(int argc, char *argv[])
{
	int f_num, s_num;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	f_num = atoi(argv[1]);
	op = argv[2];
	s_num = atoi(argv[3]);
	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*op == '/' && num2 == 0) || (*op == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(op)(num1, num2));
	return (0);
}
