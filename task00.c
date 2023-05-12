#include "monty.h"

FILE *check_input(int argc, char *argv[])
{
	FILE *fd;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	fd = fopen(argv[1], "r");

	if (fd == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	return fd;
}

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
