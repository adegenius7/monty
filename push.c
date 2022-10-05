#include "monty.h"

/**
 * push - pushes a value to the stack.
 * @stack: the stack
 * @top:current line
 *
 * Return:void
 */
void push(stack_sho_type **stack, unsigned int top)
{
	stack_sho_type *new, *tmp;
	char *push_arg = strtok(NULL, "\n \t");
	int pVal;
	/*if push, tests if the push_arg was valid or not */

	if (!is_int(push_arg))
	{
		fprintf(stdout, "L%u: usage: push integer\n", top);
		exit(EXIT_FAILURE);
	}


	pval = atoi(push_arg);
	new = malloc(sizeof(stack_sho_type));
	if (new == NULL)
	{
		fprintf(stdout, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new->n = pVal;
	new->prev = NULL;
	new->next = NULL;
	/** to check if stack is empty or underfilled **/

	if ((*stack) == NULL)
		*staqck = new;
	else if (SQ)
	{
		/** insert new node on top if not empty**/
		(*stack)->prev = new;
		new->next = *stack;
		*stack = new;
	}
	else
	{
		/** insert new node at the bottom **/
		tmp = *stack;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
		new->prev = tmp;
	}
}
