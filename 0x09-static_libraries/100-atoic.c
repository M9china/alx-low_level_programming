#include "main.h"
#include <limits.h>

/**
* _atoi - Converts a character string to an integer
* @s: The character array
*
* Return: The converted number
*/
int _atoi(char *s)
{
	int i, sign = 1, result = 0;

	if (!s)
		return (0);
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			sign *= -1;
		if (s[i] >= '0' && s[i] <= '9')
		{
			if (result > INT_MAX / 10 || (result == INT_MAX / 10 &&
						(s[i] - '0') > 7))
				return (INT_MAX);
			if (result < INT_MIN / 10 || (result == INT_MIN / 10 &&
						(s[i] - '0') > 8))
				return (INT_MIN);
			result = result * 10 + (s[i] - '0');
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
		}
	}
	result *= sign;
	return (result);
}
