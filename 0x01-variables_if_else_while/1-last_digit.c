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
{
	int n;

	int last_digit;

	last_digit = n / 10;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* assign the random number */
	if (last_digit > 5)
	{
		printf("%d and is greater than 5\n", last_digit);
	} else if (last_digit == 0)
	{
		printf("%d and is 0\n", last_digit);

	} else if (last_digit < 6 && last_digit != 0)
	{
		printf("%d and is less than 6 and not 0\n", last_digit);
	}
	return (0);
}

