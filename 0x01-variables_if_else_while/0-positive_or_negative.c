#include <stdlib.h>
#include <time.h>
/**
 * more header
 * betty style doc for function
 */
#include <stdio.h>
/**
 * main - used to check the condition
 *
 * Description: return the result of the function
 *
 * return 0
 */
int main(void)
{	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* assign the random number */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	} else if (n == 0)
	{
		printf("%d is zero\n", n);
	} else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
