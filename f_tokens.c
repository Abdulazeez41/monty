#include "monty.h"

/**
 * f_tkns - Frees the allocated memory
 */

void f_tkns(void)
{
	int i = 0;

	if (my_arguments->tkns == NULL)
		return;

	while (my_arguments->tkns[i])
	{
		free(my_arguments->tkns[i]);
		i++;
	}
	free(my_arguments->tkns);
	my_arguments->tkns = NULL;
}
