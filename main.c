#include "monty.h"

my_argss *my_arguments = NULL;
/**
 *	main - Entry point
 *	@argc: No. of command line argument
 *	@argv: A pointer to an array
 *
 * 	Return: 0 upon success
 */
int main(int argc, char **argv)
{
	size_t c = 0;

	arg_val(argc);
	args_init();
	get_strm(argv[1]);

	while (getline(&my_arguments->ln, &c, my_arguments->strm) != -1)
	{
		my_arguments->ln_no += 1;
		tkn_ln();
	}
	
	return (0);
}
