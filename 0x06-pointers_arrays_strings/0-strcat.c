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

	for (n = 0;dest[n] != '\0';n++)
	{
	} 
	for (i = 0;src[i] != '\0';i++)
	{
		dest[n + i] = src[i]
	}
	dest[n + i] = '\0';
	return (dest);
}
