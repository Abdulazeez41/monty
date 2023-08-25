#include "monty.h"

/**
 *      args_init - Set a pointer to a struct
 */
void args_init()
{
	my_arguments = malloc(sizeof(my_argss));
	if (my_arguments == NULL)
		failed_malloc();

	my_arguments->intrn = malloc(sizeof(instruction_t));
        if (my_arguments->intrn == NULL)
                failed_malloc();

	my_arguments->strm = NULL;
	my_arguments->ln = NULL;
	my_arguments->no_of_tkns = 0;
	my_arguments->ln_no = 0;
}
