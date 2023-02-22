#include <stdio.h>
/**
* main Entry point
* Description: this programm prints the size of each data type
*              used in a computer
* return Always 0 (success)
*/
int main(void)
{ 
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of long long int: %zu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", sizeof(float));

	return (0);
}
