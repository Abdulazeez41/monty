#include "monty.h"

my_argss *my_arguments = NULL;
/**
 *	main - Entry point
 *	@argc: No. of command line argument
 *	@argv: A pointer to an array
 *
 * 	Return: 0 upon success
 */
int main(int argc, char argv[])
{
	int c = 0;

	arg_val(argc);
	args_init();
	get_Strm(argv[1]);

	while (getline(my_arguments->ln, &c, my_arguments->strm) != -1)
	{
		printf("%s", my_arguments->ln);
	}
	return (0);
}
