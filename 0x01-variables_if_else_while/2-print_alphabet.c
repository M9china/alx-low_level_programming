#include <stdio.h>
/**
*main - Entry point
*Description: prints lower case alphabet
*Retrun: Always 0 (success)
*/
int main(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}

