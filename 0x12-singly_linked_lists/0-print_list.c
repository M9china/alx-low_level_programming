#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all elements of a list
 * @h: pointer to list_t.
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h) {
    size_t count = 0;

    printf("[");
    while (h != NULL) {
        if (h->str == NULL) {
            printf("(nil)");
        } else {
            printf("%s", h->str);
        }

        count++;
        h = h->next;
        if (h != NULL) {
            printf(", ");
        }
    }
    printf("]\n");

    return count;
}

