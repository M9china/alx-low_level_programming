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
	int x;
	
	int y;

	for (y = 0; dest[y] != '\0'; y++)
	{
	}
	for (x = 0; x < n && src[x] != '\0'; x++)
	{
		dest[y + x] = src[y];
	}
	dest[y + x] = '\0';

	return (dest);
}
