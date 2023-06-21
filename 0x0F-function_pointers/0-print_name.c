#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - Prints a name
 * @name: The name that is printed.
 * @f: The function pointer.
 * 
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	f(name);

}
