#include "main.h"

/**
 * *_strcat - concanates trwo strings
 * @dest: string tp concanate on
 * @src: string to append to @dest
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int n, i;

	for (n = 0;dest[n] != '\n';n++)
	{
	} 
	for (i = 0;src[i] != '\n';i++)
	{
		dest[n + i] = src[i]
	}
	dest[n + i] = '\n';
	return (dest);
}
