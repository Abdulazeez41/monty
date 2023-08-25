#include "monty.h"

/**
 * pall - Prints all the elements in the stack.
 * @stack: Pointer.
 * @ln_no: Line number.
 */
void pall(stack_t **stack, unsigned int ln_no)
{
	stack_t *tp;

	if (my_arguments->head == NULL)
		return;

	(void) ln_no;
	(void) stack;

	tp = my_arguments->head;
	while (tp != NULL)
	{
		printf("%d\n", tp->n);
		tp = tp->next;
	}
}
