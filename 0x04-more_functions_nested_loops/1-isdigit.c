#include "main.h"

/**
 * _isdigit - Entry point
 * Description: checks for digits from 0 to 9
 * &c: is the argument
 * Return: 1 if true and 0 if false
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	return (0);
}
