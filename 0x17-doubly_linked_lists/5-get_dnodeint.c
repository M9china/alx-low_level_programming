#include "lists.h"
#include <stdlib.h>
/**
 * get_dnodeint_at_index - returns nth node of a linked list
 * @head: points to the head of list
 * @index: index to retrieve node from
 *
 * Return: pointer to nth node, ELSE null
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	dlistint_t *current = head;

	while (current != NULL)
	{
		if (count == index)
		{
			return (current);
		}
		current = current->next;

		count++;
	}
	return (NULL);
}
