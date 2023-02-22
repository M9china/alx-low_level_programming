#include <unistd.h>
#include "main.h"
/**
 * main - Entry point.
 * Description: The program prints _putchar,followed by a new line.
 * Return: Always 0 (success).
 */
int main(void)
{
	char c[8] = "_putchar";
	int n;
	for(n = 0; n <= 8; n++)
	{
		putchar(c[n]);
	}
	putchar("\n");

	return (0);
}


