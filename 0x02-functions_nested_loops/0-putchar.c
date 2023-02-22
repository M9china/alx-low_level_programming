#include <unistd.h>
#include "_putchar"
/**
 * _puthcar - writes the character c to the stdout
 * @c: The character to print
 *
 * Return: 1 0n success.
 * On error, returns -1, and errorno is set appropriately.
 */
int _putchar(char c);
{
	putchar("_putchar\n");

	return (write(1,&c,1));
}

