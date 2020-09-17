#include "monty.h"
/**
 *opcode_fun - check for opcod associated function and execute
 * @opcode: opcode from user input
 * @stack: pointer to stack
 * @line_number: line number of opcode from user input
 * Return: 0  success, 1 failure
 */

int opcode_fun(char *opcode, stack_t **stack, unsigned int line_number)
{
	int i;

	instruction_t opcod[] = {
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", _add},
		{"pop", pop},
		{"nop", nop},
		{NULL, NULL}
	};
	for (i = 0; opcod[i].opcode != NULL; i++)
	{
		if (strcmp(opcode, opcod[i].opcode) == 0)
		{
			(opcod[i].f)(stack, line_number);
			return (EXIT_SUCCESS);
		}
	}
	printf("L%d: unknown instruction %s\n", line_number, opcode);
	exit(EXIT_FAILURE);
}
