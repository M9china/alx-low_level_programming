#include <stdio.h>
#include "lists.h"

/**
<<<<<<< HEAD
 * print_list - prints all elements of a list
 * @h: pointer to list_t.
 *
 * Return: number of nodes
=======
 * print_list - prints  all elements of a list
 * @h: pointer to list_t
 *
 * Return: number of node
>>>>>>> 18d301caf2d36bb56a6d4e3e3395a84560de7062
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

