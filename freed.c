#include "monty.h"

/**
 * freed - free memory
 */
void freed(void)
{
	if (my_arguments->head)
	{
		free_stack((my_arguments->head));
	}
	my_arguments->head = NULL;
}
