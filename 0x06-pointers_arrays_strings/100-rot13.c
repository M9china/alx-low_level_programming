#include "main.h"

/**
 * *rot13 - encodes a string
 * @str: string to be encoded
 *
 * Return: pointer to string
 */

char *rot13(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
	{
            if (str[i] < 'a')
	    {
                str[i] = ((str[i] - 'A' + 13) % 26) + 'A';
            }
	    else
	    {
                str[i] = ((str[i] - 'a' + 13) % 26) + 'a';
            }
        }
        i++;
    }
    return (str);
}
