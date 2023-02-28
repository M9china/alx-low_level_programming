#include "main.h"

/**
 * swap - swaps the values of two intigers
 * @a: first variable
 * @b: second variable
 * Return: void
 */

void swap(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
