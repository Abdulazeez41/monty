#include "monty.h"

/**
 * tkn_ln - tknizes the line read from file.
 */

void tkn_ln(void)
{
	int i = 0;
	char *elim = " \n";
	char *tkn = NULL;
	char *lncpy = NULL;

	lncpy = malloc(sizeof(char) * (strlen(my_arguments->ln) + 1));
	strcpy(lncpy, my_arguments->ln);
	my_arguments->no_of_tkns = 0;
	tkn = strtok(lncpy, elim);
	while (tkn)
	{
		my_arguments->no_of_tkns += 1;
		tkn = strtok(NULL, elim);
	}

	my_arguments->tkns = malloc(sizeof(char *) *
			(my_arguments->no_of_tkns + 1));
	strcpy(lncpy, my_arguments->ln);
	tkn = strtok(lncpy, elim);
	while (tkn)
	{
		my_arguments->tkns[i] = malloc(sizeof(char) *
				(strlen(tkn) + 1));
		if (my_arguments->tkns[i] == NULL)
			failed_malloc();
		strcpy(my_arguments->tkns[i], tkn);
		tkn = strtok(NULL, elim);
		i++;
	}
	my_arguments->tkns[i] = NULL;
	free(lncpy);
}
