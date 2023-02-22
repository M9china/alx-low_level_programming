#include "main.h"
/**
 * main - Entry point
 * Description: prints alphabet in lower cases, followed by new line
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
	int n;

	for(n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);

	}
	_putchar('\n');
}

