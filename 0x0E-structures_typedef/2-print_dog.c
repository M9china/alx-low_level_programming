#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - Prints structure of a dog
 * @d: Dog structure.
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %S\n", (d->name) ? name : "(nil)");
		printf("Age: %f\n", (d->age) ? age : 0);
		printf("Owner: %s\n", (d->owner) ? owner : "(nil)");
	}
}
