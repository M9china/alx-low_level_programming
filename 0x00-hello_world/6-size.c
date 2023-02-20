#include <stdio.h>
/**
* main Entry point
* Description: this programm prints the size of each data type
*              used in a computer
* return Always 0 (success)
*/
int main(void)
{  
	char c;
	int i;
	long int li;
	long long int lli;
	float f;
	printf("Size of a char: %d byte(s)\n", sizeof(c);
	printf("Size of an int: %d byte(s)\n", sizeof(i);
	printf("Size of long int: %d byte(s)\n", sizeof(li);
	printf("Size of long long int: %d byte(s)\n", sizeof(lli);
	printf("Size of a float: %d byte(s)\n", sizeof(f);
	return (0);
}
