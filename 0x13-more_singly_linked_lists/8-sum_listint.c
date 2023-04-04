#include "lists.h"

/**
 * sum_listint - sum of all data of listint_t linked list.
 * @head: pointer to first node
 *
 * Return: sum all the data, 0 if empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
