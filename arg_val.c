#include "monty.h"

/**
 *      arg_val - Entry point
 *      @argc: No. of command line argument
 */
void arg_val(int argc)
{
	if (argc == 2)
		return;

	dprintf(2, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}
