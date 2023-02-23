#include <stdio.h>
/**
* main - Entry point
* Description: Prints lower case alphabet
* Retrun: 0
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

