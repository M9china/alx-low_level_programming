#include "main.h"
/**
 * main - Entry point.
 * Description: The program prints _putchar,followed by a new line.
 * Return: Always 0 (success).
 */
int main(void)
{
	char c[] = "_putchar\n";

	int i = 0;

	while (c[i] != '\0')
	{
		_putchar(c[i]);
		i++;
	}
	return (0);
}

