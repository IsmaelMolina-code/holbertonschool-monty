#include "monty.h"

/**
 * main - function
 *
 * Return: Always 0 success
 */

int main(void)
{
	int i = 0;
	char *buffer = NULL, *tokens[1024] = {NULL};
	size_t *bufsize = 0;

	/* TOKENIZATION */
	for (i = 0; (tokens[i] = strtok(buffer, " \n")); i++)
		buffer = NULL;

	void (*f)(stack_t **stack, unsigned int line_number);

	return (0);
}
