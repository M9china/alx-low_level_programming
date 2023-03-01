#include "main.h"

/**
 * _strcat - concanates trwo strings
 * @dest: is the fist string
 * @src: is the second string
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	char s1[5] = "Think";

	char s2[4] = "Code";
	
	char *ptr;

	ptr = _strcat(s1,s2);

	_putchar(s1, s2);
}

