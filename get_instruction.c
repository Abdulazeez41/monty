#include "monty.h"

/**
 * invalid_intrn - Handles an unknown instruction error.
 */

void invalid_intrn(void)
{
	dprintf(2, "L%d: unknown instruction %s\n",
			my_arguments->ln_no, my_arguments->tkns[0]);
	arg_free_all();
	exit(EXIT_FAILURE);
}

/**
 * get_intrn - Sets the instruction based on the first token
 * in the input line.
 */

void get_intrn(void)
{
	int i = 0;
	instruction_t instructions[] = {
		{"push", &push}, {"pop", &pop},
		{"pint", &pint}, {"swap", &swap},
		{"nop", &nop}, {"add", &add},
		{NULL, NULL}
	};

	if (my_arguments->no_of_tkns == 0)
		return;
	if (my_arguments->tkns[0][0] == '#')
	{
		my_arguments->intrn->opcode = "nop";
		my_arguments->intrn->f = nop;
		return;
	}
	for (; instructions[i].opcode != NULL; i++)
	{
		if (strcmp(instructions[i].opcode, my_arguments->tkns[0])
				== 0)
		{
			my_arguments->intrn->opcode = instructions[i].opcode;
			my_arguments->intrn->f = instructions[i].f;
			return;
		}
	}
	invalid_intrn();
}
