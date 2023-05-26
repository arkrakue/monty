#include "monty.h"
#include <string.h>

/**
 * execute_opcode - Execute the opcode instruction.
 * @opcode: The opcode to be executed.
 * @arg: The argument associated with the opcode.
 * @stack: Pointer to the stack.
 * @line_number: Line number.
 * Return: 1 if the opcode is successfully executed, 0 otherwise.
 */

int execute_opcode(char *opcode, char *arg,
stack_t **stack, unsigned int line_number)
{
	if (strcmp(opcode, "push") == 0)
		push(stack, line_number, arg);
	else if (strcmp(opcode, "pall") == 0)
		pall(stack, line_number);
	else if (strcmp(opcode, "pint") == 0)
		pint(stack, line_number);
	else if (strcmp(opcode, "pop") == 0)
		pop(stack, line_number);
	else if (strcmp(opcode, "swap") == 0)
		swap(stack, line_number);
	else if (strcmp(opcode, "nop") == 0)
		nop(stack, line_number);
	else if (strcmp(opcode, "add") == 0)
		add(stack, line_number);
	else if (strcmp(opcode, "sub") == 0)
		sub(stack, line_number);
	else if (strcmp(opcode, "div") == 0)
		division(stack, line_number);
	else if (strcmp(opcode, "mul") == 0)
		mul(stack, line_number);
	else if (strcmp(opcode, "mod") == 0)
		mod(stack, line_number);
	else if (strcmp(opcode, "pchar") == 0)
		pchar(stack, line_number);
	else if (strcmp(opcode, "pstr") == 0)
		pstr(stack, line_number);
	else if (strcmp(opcode, "rotl") == 0)
		rotl(stack, line_number);
	else if (strcmp(opcode, "rotr") == 0)
		rotr(stack, line_number);
	else if (strcmp(opcode, "stack") == 0)
		set_stack(stack, line_number, data_format);
	else if (strcmp(opcode, "queue") == 0)
		set_queue(stack, line_number, data_format);
	/* add instructions */
	else
		return (0);
	return (1);
}
