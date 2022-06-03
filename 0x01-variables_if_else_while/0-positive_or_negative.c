#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - used to check the condition
 *
 * Description: return the result of the function
 *
 * Return: 0
 *
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
