#include "monty.h"

/**
 * sub - Subtract the top element of the stack from the second element from the
 * top and store the result in the second element from the top.
 * @stack: Double pointer of the stack in question
 * @line_number: line number
 * Return: void
 */

void sub(stack_t **stack, unsigned int line_number)
{
	int sub;
	stack_t *temp;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	sub = (*stack)->next->n - (*stack)->n;
	temp = *stack;
	*stack = (*stack)->next;
	(*stack)->n = sub;
	free(temp);
}
