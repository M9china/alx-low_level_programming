#include <stdio.h>
#include <ctype.h>
/**
*main - Entry point
*Return: Always 0 (success)
*/
int main(void)
{
	int numerals;
	
	for (numerals = '0';numerals <= '9';numerals++)
	{
		putchar(numerals);
	}
	
	putchar('\n');
	
	return (0);
}

