#include "main.h"

/**
 * string_toupper - changes lowercase letters of string to uppercase
 * @s: character to make upper
 * Return: string of char
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;

	return (s);
}
