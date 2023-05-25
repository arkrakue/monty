#include "monty.h"

/**
 * add_node - Adds elements to the stack
 * @stack: Pointer to the top of the stack
 * @n: Data to be added
 * Return: void
 */

void add_node(stack_t **stack, int n)
{
	stack_t *temp;

	temp = malloc(sizeof(stack_t));
	if(temp == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	else
	{
		temp->n = n;
		temp->prev = NULL;
		temp->next = *stack;
		if(*stack != NULL)
			(*stack)->prev = temp;
		*stack = temp;
	}
}
