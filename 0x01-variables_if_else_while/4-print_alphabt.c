#include <stdio.h>
/**
 * main - entry point
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
			putcahr(c);
			c++;
		}
	}
	putchar('\n');

	return (0);
}
