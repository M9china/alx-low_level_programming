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
	int a;
	int b;

	for (b = 0; dest[b] != '\0'; b++)
	{}

	for (a = 0; a < n && src[a] != '\0'; a++)
	{
		dest[b + a] = src[a];
	}
	dest[b + a] = '\0';

	return (dest);

}
