#include "monty.h"


/**
 * set_stack - Set the data structure to stack mode.
 * @stack: Double pointer to the stack.
 * @line_number: Line number.
 * @data_format: Pointer to the data format
 * Return: void
 */

void set_stack(stack_t **stack, unsigned int line_number, int *data_format)
{
	(void)stack;
	(void)line_number;
	*data_format = 1;
}
