
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - prints a random number and states if it is negative or positive
* return always 0
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if(n > 0)
{
int main(void)
{
    int n;
    srand(time(0));
    n = rand() - RAND_MAX / 2;
    if(n > 0)
    {
        print("%d is positive
",n);
    }
    else if(n == 0)
    {
        printf("%d is zero
",n);
    }
    else 
        print("%d is negative
",n);
    return (0);
} 