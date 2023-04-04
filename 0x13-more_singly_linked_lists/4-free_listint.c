#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees listint_t list
 *
 * @head: the head of the list
 *
 * Return: 0 on success, NULL if error
 */

void free_listint(listint_t *head)
{
	listint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
