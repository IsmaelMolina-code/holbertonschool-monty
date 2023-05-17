#include "monty.h"

/**
 * get_op - valid code options
 *
 * @op: option to code
 *
 * @stack: double pointer
 *
 * @line_number:
 *
 * return: void
 */
void (*get_op(char *op))(stack_t **stack, unsigned int line_number)
{
	int i = 0;

	instruction_t valid_cops[] = {
		{"push", _push},
		{"pall", _pall},
		{"pint", _pint},
		// {"pop", _pop},
		// {"swap", _swap},
		// {"add", _add},
		// {"nop", _nop},
		{NULL, NULL}
	};

	// for (i = 0; valid_cops[i].opcode != NULL; i++)
	while (i < 3)
	{
		if (strcmp(valid_cops[i].opcode, op) == 0)
		{
			// valid_cops[i].f(stack, line_number);
			return (valid_cops[i].f);
		}
		i++;
	}
	return (NULL);
}
