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
	stack_t *newelement;

	if (stack == NULL)
		return;

	newelement = (stack_t *)malloc(sizeof(stack_t));

	if (newelement == NULL)
		return;

	newelement->n = line_number;

	if (*stack == NULL)
	{
		newelement->prev = NULL;
		newelement->next = NULL;
	}
	else
	{
		newelement->next = (*stack);
		newelement->prev = (*stack)->prev;
		(*stack)->prev = newelement;
		(*stack) = newelement;
	}
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
	stack_t *aux;

	aux = *stack;

	if (aux == NULL)
		return;

	while ((aux)->next != NULL)
	{
		printf("%i\n", (aux)->n);
		(aux) = (aux)->next;
	}

	(void)(line_number);
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
