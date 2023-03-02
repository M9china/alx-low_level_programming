#include "main.h"

/**
 * leet - Encodes a string to 1337.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *str)
{
	int fhldr = 0, shldr;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[fhldr])
	{
		for (shldr = 0; shldr <= 7; shldr++)
		{
			if (str[fhldr] == leet[shldr] || str[fhldr] - 32 == leet[shldr])
				str[fhldr] = shldr + '0';
		}

		fhldr++;
	}

	return (str);
}
