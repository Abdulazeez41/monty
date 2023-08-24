#include "monty.h"

/**
 *      get_strm - get stream for reading file
 *      @file: name of file
 */
void get_Strm(char *file)
{
	int f;

	f = open(file, O_RDONLY);
	if (f == -1)
		failed_strm(file);

	my_arguments->strm = open(f, "r");
	if (my_arguments->strm == NULL)
	{
		close(f);
		failed_strm(file);
	}
}

/**
 *      failed_strm - handles error from reading a file
 *      @file: name of failed file
 */
void failed_Strm(char *file)
{
	dprintf(stderr, "Error: can't open file %s\n", file);
	arg_free();
	exit(EXIT_FAILURE);
}
