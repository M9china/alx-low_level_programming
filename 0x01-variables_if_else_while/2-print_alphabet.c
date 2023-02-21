#include <stdio.h>
/**
 *main - Entry point
 *Retrun: Always 0 (success)
 */
int main(void)
{
	int x;
	for(x = 'a';x <= 'z';x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
