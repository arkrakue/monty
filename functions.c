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
	if (temp == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	else
	{
		temp->n = n;
		temp->prev = NULL;
		temp->next = *stack;
		if (*stack != NULL)
			(*stack)->prev = temp;
		*stack = temp;
	}
}

#include "monty.h"

/**
 * add_node_end - Add a new node at the end of the stack.
 * @stack: Double pointer to the stack.
 * @n: Value to be stored in the new node.
 * Return: void
 */
 

void add_node_end(stack_t **stack, int n)
{
	stack_t *new_node = malloc(sizeof(stack_t));
	stack_t *last = *stack;

	if (!new_node)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (*stack == NULL)
	{
		new_node->prev = NULL;
		*stack = new_node;
		return;
	}
	while (last->next)
		last = last->next;
	last->next = new_node;
	new_node->prev = last;
}
