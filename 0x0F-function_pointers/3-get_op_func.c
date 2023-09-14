#include <stddef.h>
#include "3-calc.h"

/**
 * get_op_func - is the function to get op function
 * @s: is the string
 * Return: as mentioned
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
	int i = 0;

	if (s == NULL)
		return (NULL);

	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;

	return (ops[i].f);
}
