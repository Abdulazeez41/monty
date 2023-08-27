#include "monty.h"

/**
 * add - Adds the top two elements of the stack.
 * @stack: Pointer to the stack.
 * @ln_no: Line number where the add function is called.
 */
void add(stack_t **stack, unsigned int ln_no)
{
	stack_t *temp, *temp1;

	(void) stack;
	if (my_arguments->stack_lth < 2)
	{
		dprintf(2, "L%d: can't add, stack too short\n",
				ln_no);
		arg_free_all();
		exit(EXIT_FAILURE);
	}

	temp = my_arguments->head;
	temp1 = temp->next;

	temp1->n = temp->n + temp1->n;
	del_node();

	my_arguments->stack_lth -= 1;
}
