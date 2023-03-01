#include "main.h"
/**
 * _strcat - concanates two strings
 *
 * @dest: resulting string
 * @src: source string to concanate
 * @n: intiger variable
 *
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src, int n)
{
	int x;
	int y;

	for (y = 0; dest[y] != '\0'; y++)
	{}

	for (x = 0; x < n && src[x] != '\0'; x++)
	{
		dest[y + x] = src[y];
	}
	dest[x + y] = '\0';

	return (dest);

}
