#include "main.h"
/**
 * _isalpha - check for alphabetic characters
 * @c: is the character to check
 * Return: 1 if c is an alphabet(lowercase or uppercase), else 0.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
