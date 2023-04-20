#include "3-calc.h"

/**
 * get_op_func - Get the op func object to form
 * an operation
 * @s: the operator
 * Return: pointer to the op func object
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
while (i < 5)
{
	if (*s == *(ops[i].op))
		return (ops[i].f);

	i++;
}
	return (NULL);

}
