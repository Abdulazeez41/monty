#include "monty.h"

/**
 * pint - Prints the value at the top of the stack.
 * @stack: Pointer to the stack.
 * @ln_no: Line number where the pint function is called.
 */

void pint(stack_t **stack, unsigned int ln_no)
{
	(void) stack;
	if (my_arguments->head == NULL)
	{
		dprintf(2, "L%d: can't pint, stack empty\n", ln_no);
		arg_free_all();
		exit(EXIT_FAILURE);
	}

	printf("%d\n", my_arguments->head->n);
}
