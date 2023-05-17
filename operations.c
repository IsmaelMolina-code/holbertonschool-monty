#include "monty.h"

/**
 * _push - insert at the top of the stack
 * @stack: double pointer to first element
 * @line_number: element to insert
 *
 * return: void
 */
void _push(stack_t **stack, unsigned int line_number)
{
	stack_t *element = NULL;
	unsigned int num = 0;
	char *token = NULL, *arg = NULL;

	if (stack == NULL || arg == NULL || !is_number(arg))
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	element = malloc(sizeof(stack_t));

	if (!element)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	token = strtok(NULL, " \n\t");
	if (!token || !stack)
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	num = atoi(token);
	element->n = num;
	element->prev = NULL;
	element->next = *stack;

	if (element->next != NULL)
		(element->next)->prev = element;
	*stack = element;
}

/**
 * _pall - insert at the top of the stack
 *
 * @stack: double pointer to first element
 * @line_number: always NULL
 *
 * return: void
 */

void _pall(stack_t **stack, unsigned int line_number)
{
	stack_t *aux = *stack;

	(void)line_number;

	while (aux)
	{
		printf("%d\n", aux->n);
		aux = aux->next;
	}

}

/**
 * _pint - insert at the top of the stack
 *
 * @stack: double pointer to first element
 * @line_number: always NULL
 *
 * return: void
 */

void _pint(stack_t **stack, unsigned int line_number)
{
	if (stack == NULL)
		return;

	printf("%i\n", (*stack)->n);

	(void)(line_number);
}
