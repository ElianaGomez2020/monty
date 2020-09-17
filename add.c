#include "head.h"
/**
  * _add - adds the top two elements of the stack.
  * @stack: pointer to stack
  * @line_number: line number of instruction
  * Return: void
  */
void _add(stack_t **stack, unsigned int line_number)
{
	int a;
	int b;
	int result;

	if (len_stack(stack) < 2)
	{
		printf("L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	a = (*stack)->n;
	b = (*stack)->next->n;

	result = a + b;

	pop(stack, line_number);

	(*stack)->n = result;
}
