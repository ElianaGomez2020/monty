#include "head.h"
/**
 * len_stack - returns length of stack
 * @stack: pointer to head of stack
 * Return: length
 */
size_t len_stack(stack_t **stack)
{
	stack_t *current;
	unsigned int i;

	current = *stack;
	i = 0;
	while (current != NULL)
	{
		current = current->next;
		i++;
	}
	return (i);
}
