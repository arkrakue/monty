#include "monty.h"

/**
 * rotl - Rotate the stack so that the top element becomes the
 * last one and the second top element becomes the first one.
 * @stack: Double pointer of the stack in question
 * @line_number: Unused
 * Return: void
 */

void rotl(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	stack_t *temp;

	if (*stack == NULL || (*stack)->next == NULL)
		return;

	temp = *stack;
	while (temp->next != NULL)
		temp = temp->next;

	temp->next = *stack;
	(*stack)->prev = temp;
	*stack = (*stack)->next;
	(*stack)->prev->next = NULL;
	(*stack)->prev = NULL;
}
