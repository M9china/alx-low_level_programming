#include "main.h"
/**
 * main - Entry point
 * Description - Prints alphabet in lower cases, followed by new line
 * Return:(void)
 */
void print_alphabet(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);

	}
	_putchar('\n');
}

