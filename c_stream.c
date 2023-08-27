#include "monty.h"

/**
 * c_stream - Closes the file stream
 */

void c_stream(void)
{
	if (my_arguments->strm == NULL)
		return;

	fclose(my_arguments->strm);
	my_arguments->strm = NULL;
}
