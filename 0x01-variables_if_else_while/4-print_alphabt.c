#include <stdio.h>
#include <ctype.h>
/**
 *main - Entry point
 *Return: Always 0 (success)
 */
int main(void)
{
	int alpha_bt;
	for(alpha_bt = 'a';alpha_bt <= 'z';alpha_bt++)
	{
		if(alpha_bt == 'e' || alpha_bt == 'q')
		{
			continue;
		}
		putchar(alpha_bt);
	}
	putchar('\n');
	return (0);
}
