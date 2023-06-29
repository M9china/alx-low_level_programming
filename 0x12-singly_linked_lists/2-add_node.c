#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node to the head
 * @head: pointer to first node 
 * @str: string added to list_t
 *
 * Return: Adress of new element (on SUCCESS) 
 *  or NULL if failed
 */

list_t *add_node(list_t **head, const char *str) {
    if (str == NULL) {
        return NULL;
    }

    list_t *new_node = malloc(sizeof(list_t));
    if (new_node == NULL) {
        return NULL;
    }

    char *str_copy = strdup(str);
    if (str_copy == NULL) {
        free(new_node);
        return NULL;
    }

    new_node->str = str_copy;
    new_node->len = strlen(str);
    new_node->next = *head;

    *head = new_node;

    return new_node;
}

