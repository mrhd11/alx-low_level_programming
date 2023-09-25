#include "lists.h"

/**
 * print_listint - a function that prints all elements of a list
 *
 * @h: pointer to first node
 *
 * Return: the number of nodes
*/


size_t print_listint(const listint_t *h)
{
	size_t node_count = 1;

	listint_t *current;

	current = h;
	while(current != NULL)
	{
		printf("%d", current->data);
		current = current->next;
		node_count ++;
	}

	return (node_count);
}
