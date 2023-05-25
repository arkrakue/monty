#include "monty.h"

/**
 * pall - Prints all the elements of the stack, starting from the top
 * @stack: Double pointer of Stack to be printed
 * @line_number: line number
 * Return: void
 */

void pall(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	stack_t *Temp = *stack;

	while(Temp)
	{
		printf("%d\n", Temp->n);
		Temp = Temp->next;
	}
}
