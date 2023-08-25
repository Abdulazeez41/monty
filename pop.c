#include "monty.h"

/**
 * pop - Removes the top element from the stack.
 * @stack: Pointer to the stack.
 * @ln_no: Line number where the pop function is called.
 */
void pop(stack_t **stack, unsigned int ln_no)
{
	(void) stack;
	if (my_arguments->head == NULL)
	{
		dprintf(2, "L%d: can't pop an empty stack\n", ln_no);
		arg_free_all();
		exit(EXIT_FAILURE);
	}

	del_node();
	my_arguments->stack_lth -= 1;
}
