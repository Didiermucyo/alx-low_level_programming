#include <stdio.h>
#include <ctype.h>
/**
 * main - return alphabets except e and q
 *
 * description: print the required result
 *
 * Return : integer value 0
 *
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
