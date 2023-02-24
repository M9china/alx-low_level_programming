#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: 1 if true and 0 if false
 * On error, -1 is returned and errorno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
