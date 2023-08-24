#include "monty.h"

/**
 *      args_init - Set a pointer to a struct
 */
void args_init()
{
	my_arguments = malloc(sizeof(my_argss));
	if (my_arguments == NULL)
		failed_malloc();

	my_arguments->strm = NULL;
	my_arguments->ln = NULL;	
}
