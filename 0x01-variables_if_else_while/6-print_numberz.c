#include <stdio.h>
/**
 * main - print integer from 0 to 10
 *
 * Description: return the required result
 *
 * Return: return integer 0
 *
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);
}
