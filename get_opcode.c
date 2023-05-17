#include "monty.h"

/**
 * get_op - Get the corresponding function for a given opcode.
 *
 * @op: option to code
 *
 * Return: Pointer to the corresponding function, or NULL if not found.
 */

void (*get_op(char *op))(stack_t **stack, unsigned int line_number)
{
	int i = 0;

	instruction_t valid_cops[] = {
		{"push", _push},
		{"pall", _pall},
		{"pint", _pint},
		{NULL, NULL}
	};

	while (i < 3)
	{
		if (strcmp(valid_cops[i].opcode, op) == 0)
		{
			/* valid_cops[i].f(stack, line_number);*/
			return (valid_cops[i].f);
		}
		i++;
	}
	return (NULL);
}
