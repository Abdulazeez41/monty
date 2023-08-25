#ifndef	_MONTY_H_
#define _MONTY_H_

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <stddef.h>


/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct my_args - holds multiple variables
 *
 *
 *
 */
typedef struct my_args
{
	FILE *strm;
	char *ln;
	unsigned int ln_no;
	char **tkns;
	int no_of_tkns;
	instruction_t *intrn;
	stack_t *head;
	int stack_lth;
	int stack;
} my_argss;

extern my_argss *my_arguments;

void push(stack_t **stack, unsigned int ln_no);
void pall(stack_t **stack, unsigned int ln_no);

int arg_val(int argc);

void freed(void);
void arg_free();
void args_init();
void failed_malloc(void);
void get_Strm(char *file);
void failed_Strm(char *file);
void free_stack(stack_t *head);

ssize_t getline(char **lineptr, size_t *n, FILE *stream);


#endif /* MONTY_H */
