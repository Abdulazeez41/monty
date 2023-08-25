#include "monty.h"

/**
 * push - Pushes an integer to the stack.
 * @stack: Pointer.
 * @ln_no: Line no.
 */
void push(stack_t **stack, unsigned int ln_no)
{
	if (my_arguments->no_of_tkns <= 1 || !(is_number(my_arguments->tkns[1])))
	{
		arg_free();
		dprintf(2, "L%d: usage: push integer\n", ln_no);
		exit(EXIT_FAILURE);
	}

	*stack = malloc(sizeof(stack_t));
	if (*stack == NULL)
		failed_malloc();
	(*stack)->next = (*stack)->prev = NULL;
	(*stack)->n = (int) atoi(my_arguments->tkns[1]);
	if (my_arguments->head == NULL)
		my_arguments->head = *stack;
	else
	{
		if (my_arguments->stack)
		{
			(*stack)->next = my_arguments->head;
			my_arguments->head->prev = *stack;
			my_arguments->head = *stack;
		}
		else
		{
			stack_t *tp = my_arguments->head;

			while (tp->next)
				tp = tp->next;
			tp->next = *stack;
			(*stack)->prev = tp;
		}
	}
	my_arguments->stack_lth += 1;
}
