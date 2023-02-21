#include <stdio.h>
#include <ctype.h>
/**
 *main - Entry point
 *Return: Always 0 (success)
 */
int main(void)
{
	int rev_alphabet;
	for(rev_alphabet = 'z'; rev_alphabet >= 'a'; rev_alphabet--)
	{
		putchar(rev_alphabet);
	}
	putchar('\n');
	return (0);
}
