#include "main.h"

/**
 * *_strcat - concanates trwo strings
 * @dest: string tp concanate on
 * @src: string to append to @dest
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
    int i = 0, j = 0;

    while (dest[i] != '\0')
    {
        i++;
    }
    while (src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    _putchar('\n');

    return (dest);
}
