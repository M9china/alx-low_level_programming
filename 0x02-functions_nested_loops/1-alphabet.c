#include<unistd.h>
#include "main.h"
/**
 * main - Entry point
 * Description: prints alphabet in lower cases, followed by new line
 * Return: Always 0 (success)
 */
int main(void)
{
	for(int n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);

	}
	_puthcar("\n");

	return (0);
}

