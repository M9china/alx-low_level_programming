#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 * Return:(void)
 */
void print_alphabet_x10(void)
{
	int n, i;
	for (n = 1; n < 11; n++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
	
		_putchar('\n');
		
	}
}

