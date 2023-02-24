#include "main.h"

/**
 * more_numbers - prints 0 - 14
 *
 * Return: void
 */

void more_numbers(void)
{
	char n, x;
	int i = 0;

	while (i < 10)
	{
		for (n = 0; n <= 14; n++)
		{
			x = n;
			if (n > 9)
			{
				_putchar('1');
				x = n % 10;
			}
			_putchar('0' + x);
		}

		_putchar('\n');
		i++;
	}
}
