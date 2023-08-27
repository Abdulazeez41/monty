#include "monty.h"

/**
 * free_head - Frees the memory allocated for the head and
 * sets it to NULL.
 */

void free_head(void)
{
	if (my_arguments->head)
		free_stack(my_arguments->head);

	my_arguments->head = NULL;
}

/**
* f_args - free memory allocated to arguments pointer
*/

void f_args(void)
{
	if (my_arguments == NULL)
		return;

	if (my_arguments->intrn)
	{
		free(my_arguments->intrn);
		my_arguments->intrn = NULL;
	}

	free_head();

	if (my_arguments->ln)
	{
		free(my_arguments->ln);
		my_arguments->ln = NULL;
	}

	free(my_arguments);
}
