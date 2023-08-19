#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - prints length of elements in list
 * @h: points to node
 *
 * Return: number of element
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}

