#include "monty.h"

/**
 * main - funct
 */
int main(void)
{
	stack_t *stack = NULL;

	stack = malloc(sizeof(stack_t));

	get_op("push", &stack, 1);
	get_op("push", &stack, 2);
	get_op("push", &stack, 3);
	get_op("pall", &stack, 4);

	return (0);
}
