#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define UNUSED(x) (void)(x)
#define LINE_MAX 1024

/**
 * struct stack_shobanke - doubly linked list representation of a stack
 * @dataValue: integer
 * @prev: points to the previous element in a list
 * @next: pointer to next element in a list
 *
 * Description: doubly linked list node structure for stack_monty project
 *
 */

typedef struct stack_shobanke
{
	int dataValue;
	struct stack_shobanke *prev;
	struct stack_shobanke *next;
} stack_sho_type;

/**
 * struct instruction_shobanke - opcode and its functions
 * @opcode: the opcode
 * @f: function that handles the opcode
 *
 * Description: opcode for stack_monty project in Alx
 */

typedef struct instruction_shobanke
{
	char *opcode;
	void (*f)(stack_sho_type **stack, unsigned int top);
} instruction_sho_type;

extern int SQ;
instruction_sho_type *parse_line(char *line);
void push(stack_sho_type **stack, unsigned int top);
#endif
