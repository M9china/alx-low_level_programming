#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: A pointer to the head of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: the address of the new element,
 *          or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
    list_t *new_node, *last;
    char *dup_str;
    size_t str_len = 0;

    new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
        return NULL;

    dup_str = strdup(str);
    if (dup_str == NULL)
    {
        free(new_node);
        return NULL;
    }

    while (str[str_len] != '\0')
        str_len++;

    new_node->str = dup_str;
    new_node->len = str_len;
    new_node->next = NULL;

    if (*head == NULL)
        *head = new_node;
    else
    {
        last = *head;
        while (last->next != NULL)
            last = last->next;
        last->next = new_node;
    }

    return new_node;
}

