#include "monty.h"

/**
 *      failed_malloc - Handles error for malloc
 */
void failed_malloc(void)
{
	dprintf(2, "Error: Malloc failed\n");
	arg_free();
	exit(EXIT_FAILURE);	
}
