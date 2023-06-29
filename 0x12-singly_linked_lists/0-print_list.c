#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints  all elements of a list
 * @h: pointer to list_t
 *
 * Return: number of node
 */

void print_list(const list_t *head)
{
    const list_t *current = head;

    while (current != NULL)
    {
        printf("[%d] %s\n", current->len, current->str);
        current = current->next;
    }
}

