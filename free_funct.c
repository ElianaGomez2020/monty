#include "head.h"
/**
 * free_stack - free a stack_t stack
 * @stack: stack to be freed
 * Return: void
 */
void free_stack(stack_t **stack)
{
	stack_t *current;

	while (*stack != NULL)
	{
		current = *stack;
		*stack = (*stack)->next;
		free(current);
	}
}
/**
 * _free - free all
 * @stack: stack to free
 * @line: line to free from getline
 * @fp: file pointer to free
 * Return: void
 */
void _free(stack_t *stack, char *line, FILE *fp)
{
	if (stack != NULL)
		free_stack(&stack);

	free(line);
	fclose(fp);
}
