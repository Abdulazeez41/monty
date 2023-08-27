#include "monty.h"

/**
 * run_intrn - Runs the instruction by the arguments.
 */

void run_intrn(void)
{
	stack_t *stack = NULL;

	if (my_arguments->no_of_tkns == 0)
		return;

	my_arguments->intrn->f(&stack, my_arguments->ln_no);
}
