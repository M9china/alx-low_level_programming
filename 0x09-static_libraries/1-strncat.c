#include "main.h"
/**
 * _strncat - concanates two strings
 *
 * @dest: resulting string
 * @src: source string to concanate
 * @n: number of bytes to append to dest
 *
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (j = 0; dest[j] != '\0'; j++)
	{}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[j + i] = src[i];
	}
	dest[j + i] = '\0';

	return (dest);
}
