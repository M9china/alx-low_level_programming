#include <unistd.h>

/**
 * _putchar - prints character c to the stdout
 * @c: The character to be printed
 *
 * Return: 1 on success
 * On error, -1 is returned and errorno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
