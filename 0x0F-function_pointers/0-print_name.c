#include "function_pointers.h"
#include <stdio.h>
<<<<<<< HEAD
=======

>>>>>>> 7c00586ce54ade02dc2f7643477ffda5663019a5
/**
 * print_name - print name using pointer to function
 * @name: string to add
 * @f: pointer to function
<<<<<<< HEAD
=======
 *
>>>>>>> 7c00586ce54ade02dc2f7643477ffda5663019a5
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
