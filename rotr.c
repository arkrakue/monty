#include "monty.h"


/**
 * rotr - Rotate the stack to the bottom.
 * @stack: Double pointer to the stack.
 * @line_number: Line number.
 * Return: void
 */


void rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *top = *stack;
	stack_t *second_last = NULL;

	(void)line_number;
	if (!top || !top->next)
		return;

	while (top->next)
	{
		second_last = top;
		top = top->next;
	}

	second_last->next = NULL;
	top->prev = NULL;
	top->next = *stack;
	(*stack)->prev = top;
	*stack = top;
}
