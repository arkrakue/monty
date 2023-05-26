#include "monty.h"

/**
 * free_stack - Frees all nodes in a stack.
 * @stack: Pointer to the stack.
 * Return: void
 */

void free_stack(stack_t *stack)
{
	stack_t *tmp;

	while (stack != NULL)
	{
		tmp = stack;
		stack = stack->next;
		free(tmp);
	}
}
