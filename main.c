#include "monty.h"

/**
 * main - Monty program code
 * @argc: The Number of command line arguments passed
 * @argv: Array of command line arguments passed
 * Return: EXIT_SUCCESS on success and EXIT_FAILURE on failure
 */

int main(int argc, char **argv)
{
	FILE *file;
	stack_t *stack = NULL;
	unsigned int line_num = 0;
	int data_format = 1;
	char line[LINE_LENGTH];
	char *opcode, *arg;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	file = fopen(argv[1], "r");
	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while (fgets(line, LINE_LENGTH, file) != NULL)
	{
		line_num++;
		opcode = strtok(line, " \t\n");
		if (opcode == NULL || opcode[0] == '#')
			continue;
		arg = strtok(NULL, " \t\n");
		if (!execute_opcode(opcode, arg, &stack, line_num, &data_format))
		{
			fprintf(stderr, "L%d: unknown instruction %s\n", line_num, opcode);
			exit(EXIT_FAILURE);
		}
	}

	free_stack(stack);
	fclose(file);
	return (EXIT_SUCCESS);
}
