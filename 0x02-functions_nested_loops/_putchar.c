#include <unistd.h>
/**
 * _putchar - writes the character c to the stdout
 * &c: The character to print
 *
 * Return: on succes 1.
 * On error, -1 is returned, and the errorno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
