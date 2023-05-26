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

/**
 * _isdigit - Checks if a string consists of digits.
 * @str: The string to be checked.
 * Return: 1 if the string consists of digits, 0 otherwise.
 */
int _isdigit(char *str)
{
	int i;

	if (str == NULL)
		return (0);

	for (i = 0; str[i]; i++)
	{
		if (str[i] == '-' && i == 0)
			continue;
		if (str[i] < '0' || str[i] > '9')
			return (0);
	}

	return (1);
}
