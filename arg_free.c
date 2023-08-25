#include "monty.h"

/**
 * arg_free - free memory arguments
 */
void arg_free()
{
	if (my_arguments == NULL)
		return;

	if (my_arguments->intrn)
	{
		free(my_arguments->intrn);
		my_arguments->intrn = NULL;
	}

	freed();

	if (my_arguments->ln)
	{
		free(my_arguments->ln);
		my_arguments->ln = NULL;
	}

	free(my_arguments);
}
