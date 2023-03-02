#include "main.h"

/**
 * *rot13 - encodes a string
 * @str: string to be encoded
 *
 * Return: pointer to string
 */

char *rot13(char *str)
{
	char alphabet[52] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char key[52] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	int i;

	int j = 0;

	for (i = 0; str[i] != '\0'; i++)
	{

		for (j = 0; alphabet[j] != '\0'; j++)
		{
			if (s[i] == alphabet[j])
			{
				str[i] = key[j];
				break;
			}
		}
	}
	return (str);
}
