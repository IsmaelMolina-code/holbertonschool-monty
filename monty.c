#include "monty.h"

/**
 * main - Entry point
 *
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: 0 on success, 1 on error
 */

int main(int argc, char *argv[])
{
	FILE *file;
	char *line = NULL;
	size_t len = 0;
	unsigned int line_number = 0;
	stack_t *stack = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: monty file\n");
		return (EXIT_FAILURE);
	}

	file = fopen(argv[1], "r");

	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		return (EXIT_FAILURE);
	}

	while (getline(&line, &len, file) != -1)
	{
		line_number++;
		char *opcode = strtok(line, " \n\t$");
		if (opcode != NULL && opcode[0] != '\0' && opcode[0] != '#')
			get_op(opcode, &stack, line_number);
	}

	free_stack(&stack);
	free(line);
	fclose(file);

	return (EXIT_SUCCESS);
}

/**
 * free_stack - Frees a stack.
 *
 * @stack: Pointer to the top of the stack.
 */
void free_stack(stack_t **stack)
{
	stack_t *current, *tmp;

	if (stack == NULL || *stack == NULL)
		return;

	current = *stack;

	while (current != NULL)
	{
		tmp = current;
		current = current->next;
		free(tmp);
	}

	*stack = NULL;
}
