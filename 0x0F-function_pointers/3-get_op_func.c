#include "3-calc.h"

/**
  *get_op_func - a function that selects the correct function to perform.
  *Return: correct function result or NULL if operator is wrong.
  *@operator: operator used.
  */

int (*get_op_func(char *operator))(int, int)
{
	/*2d arr of type struct containing operators*/
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (i < 5)
	{
		/*gets the correct function for operator*/
		if (operator[0] == ops[i].op[0])
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
