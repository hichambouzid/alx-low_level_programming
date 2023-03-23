#include "3-calc.h"
#include<stddef.h>
/**
 * get_op_func - pointet to function return a function return int
 *
 * @s: type of operator
 *
 * Return: a function stored int array of typedef
 */
int (*get_op_func(char *s))(int, int)
{
	/* struct opts of struct op_t */
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 5)
	{
		if (*ops[i].op == *s)
			break;
		i++;
	}
	return (ops[i].f);
}
