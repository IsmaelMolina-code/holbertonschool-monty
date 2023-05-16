#include "monty.h"


int main(void)
{
    stack_t *stack = NULL;
    stack = malloc(sizeof(stack_t));

    get_op("push", &stack, 3);
    get_op("push", &stack, 1);
    get_op("push", &stack, 6);
    get_op("push", &stack, 9);
    get_op("push", &stack, 4);
    get_op("push", &stack, 6);
    get_op("pall", &stack, 4);
    get_op("pint", &stack, 0);
    get_op("pint", &stack, 0);
    get_op("pint", &stack, 0);
    get_op("pint", &stack, 0);


    
    return (0);
}