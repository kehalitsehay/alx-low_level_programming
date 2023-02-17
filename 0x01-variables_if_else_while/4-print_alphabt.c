#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase, except for q and e.
 *
 * return: always 0 (success)
 */
int main(void)
{
	char c;

	c = 'a';

	while (c <= 'z')
	{
		if ((c != 'q' && c != 'e') && (c <= 'z'))
		{
			putchar(c);
		}
		c++;
	}

	putchar('\n');

	return (0);
}
