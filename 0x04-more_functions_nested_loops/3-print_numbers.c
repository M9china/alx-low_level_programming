#include "main.h"

/**
 * print_numbers - prints numbers from0 to 9, followed by newline
 *
 * Return: void
 */

void print_numbers(void)
{
	char i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
