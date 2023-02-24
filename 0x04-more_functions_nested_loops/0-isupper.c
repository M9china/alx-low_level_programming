#include "main.h"
#include <ctype.h>

/**
 * isupper - checks for uppercase letters
 * @c: is the argument being checked
 * Return: 1 if true and 0 if false
 */

int isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
