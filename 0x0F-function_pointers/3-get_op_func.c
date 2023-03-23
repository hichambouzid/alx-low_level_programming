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
	while (i <= 5)
	{
		if (*ops[i].op == *s)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}