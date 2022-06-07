#include <stdio.h>
/**
 * print_alphabet_x10 - check the code
 *
 * return: nothing
 */
void print_alphabet_x10(void)
{
	int count = 0;
	char i;

	while (count++ <= 9)
	{
		for (i = 'a'; i <= 'z'; i++)
			putchar(i);
		putchar('\n');
	}
}
