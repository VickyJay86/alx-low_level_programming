#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
* get_op_func - Selects the correct function to perform
* the operation asked by the user.
* @s: The operator passed as argument.
*
* Return: A pointer to the function corresponding
* to the operator given as a parameter.
*/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{ "+", op_add },
	{ "-", op_sub },
	{ "*", op_mul },
	{ "/", op_div },
	{ "%", op_mod },
	{ NULL, NULL },

	};

	int y = 0;

	while (ops[y].op != NULL && *(ops[y].op) != *s)

		y++;

	return (ops[y].f);
}
