#include "monty.h"

/**
 * pstr - Prints the string starting at the top of the stack.
 * @stack: Double pointer to the stack in question
 * @line_number: line Number
 * Return: void
 */

void pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *current;

	(void)line_number;
	current = *stack;
	while (current != NULL && current->n != 0 &&
(current->n > 0 && current->n <= 127))
	{
		putchar(current->n);
		current = current->next;
	}
	putchar('\n');
}
