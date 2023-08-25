#include "monty.h"

/**
* del_node - deletes node at the head/top
* Return: void
*/
void del_node(void)
{
	stack_t *tp;

	tp = my_arguments->head;
	my_arguments->head = tp->next;
	free(tp);
}
