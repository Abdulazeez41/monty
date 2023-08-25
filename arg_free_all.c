#include "monty.h"

/**
 * arg_free_all - Frees all allocated memory
 */

void arg_free_all(void)
{
	c_stream();
	f_tkns();
	f_args();
}
