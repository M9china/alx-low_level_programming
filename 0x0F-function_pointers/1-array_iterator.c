#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - prints elements on new line 
 * @array : array entered
 * @size: number of printed elements
 * @action: pointer to printer
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array == NULL || action == NULL)
		return;

	for (x = 0; x < size; x++)
		action(array[x]);
}
