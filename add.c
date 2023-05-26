#include "monty.h"

/**
 * add - add the top two elements of the stack together and store
 * the result in the second element from the top.
 * @stack: Double pointer of the stack in question
 * @line_number: Line number
 * Return: void
 */

void add(stack_t **stack, unsigned int line_number)
{
	int sum;
	stack_t *temp;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	sum = (*stack)->n + (*stack)->next->n;
	temp = *stack;
	*stack = (*stack)->next;
	(*stack)->n = sum;
	free(temp);
}
