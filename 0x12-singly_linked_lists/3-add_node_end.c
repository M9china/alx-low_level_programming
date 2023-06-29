#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: A pointer the head of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: the address of the new element,
 *          or NULL if it failed.
 */

typedef struct list_s {
    char *str;
    struct list_s *next;
} list_t;

list_t *add_node_end(list_t **head, const char *str) {
    if (head == NULL || str == NULL) {
        return NULL;
    }

    list_t *new_node = (list_t *)malloc(sizeof(list_t));
    if (new_node == NULL) {
        return NULL;
    }

    new_node->str = strdup(str);
    if (new_node->str == NULL) {
        free(new_node);
        return NULL;
    }

    new_node->next = NULL;

    if (*head == NULL) {
        *head = new_node;
    } else {
        list_t *current = *head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = new_node;
    }

    return new_node;
}
