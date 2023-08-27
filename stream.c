#include "monty.h"

/**
 *	failed_strm - handles error from reading a file
 *	@files: name of failed files
 */
void failed_strm(char *files)
{
	dprintf(2, "Error: can't open file %s\n", files);
	arg_free();
	exit(EXIT_FAILURE);
}

/**
 *	get_strm - get stream for reading file
 *	@files: name of files
 */
void get_strm(char *files)
{
	int f;

	f = open(files, O_RDONLY);
	if (f == -1)
		failed_strm(files);

	my_arguments->strm = fdopen(f, "r");
	if (my_arguments->strm == NULL)
	{
		close(f);
		failed_strm(files);
	}
}
