#include "monty.h"

/**
 * swap - Swaps the top two elements of the stack.
 * @stack: Pointer to the stack.
 * @ln_no: Line number where the swap function is called.
 */
void swap(stack_t **stack, unsigned int ln_no)
{
	stack_t *temp, *temp1;

	(void) stack;
	if (my_arguments->stack_lth < 2)
	{
		dprintf(2, "L%d: can't swap, stack too short\n", ln_no);
		arg_free_all();
		exit(EXIT_FAILURE);
	}

	temp = my_arguments->head;
	temp1 = temp->next;
	temp->next = temp1->next;
	if (temp->next)
		temp->next->prev = temp;
	temp1->next = temp;
	temp->prev = temp1;
	temp1->prev = NULL;
	my_arguments->head = temp1;
}
