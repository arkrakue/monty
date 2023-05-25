#include "monty.h"

/**
 * push - Pushes an integer value to be stores into a stack
 * @stack: Double pointer of the first node of the stack
 * @line_number: Number of the line where the push is done
 * @n: Integer value to be stacked as a string
 * Return: void
 */

void push(stack_t **stack, unsigned int line_number, char *n)
{
	int data;

	if(n == NULL || isdigit(n) == 0)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	data = atoi(n);
	add_node(stack, data);
}
