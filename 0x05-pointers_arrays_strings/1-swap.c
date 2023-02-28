#include "main.h"

/**
 * swap_int - swaps the values of two intigers
 * @a: first variable
 * @b: second variable
 * Return: void
 */

void swap(int *a, int *b)
{
	a = 98;
	b = 42;
	int i = &a;

	&a = &b;
	&b = i;
}
