#include "main.h"
/**
 * main - Entry point.
 * Description: The program prints _putchar,followed by a new line.
 * Return: Always 0 (success).
 */
int main(void)
{
	char c[7] = "_putchar";

	int n;

	for (n = 0; n <= 7; n++)
	{
		_putchar(c[n]);
	}
	_putchar('\n');

	return (0);
}


