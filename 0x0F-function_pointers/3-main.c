#includ7e "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
* main - Prints the result of simple operations.
* @argc: The number of arguments supplied to the program.
* @argv: An array of pointers to the arguments.
*
* Return: 0 (success)
*/
int main(int __attribute__((__unused__)) argc, char *argv[])

{
	int n1, n2;
	char *opt;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	n1 = atoi(argv[1]);
	opt = argv[2];
	n2 = atoi(argv[3]);

	if (get_op_func(opt) == NULL || opt[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*opt == '/' && n2 == 0) ||
			(*opt == '%' && n2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op)(n1, n2));

	return (0);
}
